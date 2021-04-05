### 判断代码正确性
***
#### 题目

在下面这段代码中为什么p合法而lp非法？  

int i = 42;  void *p = &i;  long *lp = &i;

***
#### 回答

long\*和int\*不兼容，而void\*可以指向任意对象，但指向后并不能确定这个对象到底是什么类型。