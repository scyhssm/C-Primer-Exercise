### 观察程序片段合法性
***
#### 题目
解释下面程序片段是否合法。

```c++
std::cout << "The sum of " << v1;

          << " and " << v2;

          << " is " << v1 + v2 << std::endl;  
```



***
#### 回答
不合法，分号代表一个语句的结束，第二句和第三句没有和第一句连在一起，也就无法获得**std::cout<<** 操作后的返回值；无法获得返回值，输出运算符<<失去左侧对象，编译失败。

在第二句和第三句最开始的 << 前加上std::cout 即可。

```c++
std::cout << "The sum of " << v1;

std::cout << " and " << v2;

std::cout << " is " << v1 + v2 << std::endl;
```
