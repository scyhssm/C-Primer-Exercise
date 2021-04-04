### 程序阅读
***
#### 题目

下列变量的初值分别是什么？

```c++
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
}
```



***
#### 回答

定义于函数体内的内置类型的对象如果没有初始化，则其值未定义。类的对象如果没有显式地初始化，则其值由类定义。内置类型如int、double和char，在函数体内需要显式初始化；如果是类对象如string，调用默认构造函数，生成空的字符串。

```c++
std::string global_str;  // empty string
int global_int;  // zero
int main()
{
    int local_int;  // undefined
    std::string local_str;  // empty string
}
```

