### 阅读程序
***
#### 题目

假设已有上一个练习中所做的那些声明，则下面的哪些语句是合法的？请说明顶层const和底层const在每个例子中有何体现。  

r1 = v2;  

p1 = p2;  

p2 = p1;  

p1 = p3;  

p2 = p3;

***
#### 回答

不合法，v2虽然是顶层const，但是r1是v2的引用，需要保持类型一致;  

不合法，p2是底层const，赋值有影响;  

合法，p2是底层const，p2会限制修改指向的对象;  

不合法，p3是底层const，赋值到p1则p1对象可以修改指向对象;  

合法，p3既是底层又是顶层const，p2是底层const，底层类型一致，顶层指针赋值不影响底层；  

总结，对于非引用和指针对象，只存在顶层const概念，赋值会拷贝对象；而对于指针对象，指针本身的const是顶层，赋值直接进行拷贝，而底层const对指向类型做了限定，不可以从const转为非const，否则就意味着赋值后可以改变指针指向对象的值；对于引用，只存在顶层const概念，但是非const引用到const是不被允许的。