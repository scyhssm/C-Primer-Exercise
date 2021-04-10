### 程序阅读
***
#### 题目

假设txt_size是一个无参数的函数，它的返回值是int。请回答下列哪个定义是非法的？为什么？

```c++
unsigned buf_size = 1024;
(a) int ia[buf_size];
(b) int ia[4 * 7 -14];
(c) int ia[txt_size()];
(d) int char st[11] = "fundamental";
```



***
#### 回答

(a) 非法，buf_size非常量表达式或者常量  

(b) 合法，大小在编译期可以确定  

(c) 不合法，txt_size非constexpr  

(d) 不合法，缺少存放空字符的位置