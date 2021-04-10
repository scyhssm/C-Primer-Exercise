### 逻辑判断
***
#### 题目

对于104页的程序来说，如果不初始化scores将发生什么？

***
#### 回答

内置类型不会在函数内被初始化，未经初始化的值被++，结果是不可预知的；代码可以编译过，运行也不会出错，但是值有问题。
