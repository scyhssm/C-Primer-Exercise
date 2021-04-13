### 判断程序逻辑
***
#### 题目

下面的赋值是非法的，为什么？应该如何修改？

```c++
double dval; int ival; int *pi;
dval = ival = pi = 0;
```



***
#### 回答

pi作为int指针类型对象，无法直接赋值到int类型对象，不能用类型转换把int指针转为int。