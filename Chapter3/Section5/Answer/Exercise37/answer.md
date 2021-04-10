### 程序阅读
***
#### 题目

下面的程序是何含义，程序的输出结果是什么？

```c++
const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while (*cp) {
    cout << *cp << endl;
    ++cp;
}
```



***
#### 回答

打印const char数组，但是程序不会停止直到遇到'\0'。
