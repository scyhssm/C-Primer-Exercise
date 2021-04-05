### 阅读程序
***
#### 题目

下面哪些句子是合法的？如果有不合法的句子，请说明为什么？

(a) const int buf;  (b) int cnt = 0;  

(c) const int sz = cnt;  (d) ++cnt;++sz;

***
#### 回答

(a) 不正确，buf未经初始化  

(b) 正确，正常初始化cnt为0  

(c) 正确，值拷贝不区分变量是否是const  

(d) cnt可以自加，sz值被限定，不可以自加