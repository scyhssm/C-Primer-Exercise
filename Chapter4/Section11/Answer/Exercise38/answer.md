### 强制类型转换阅读
***
#### 题目

说明下面这条表达式的含义。  

double slope = static_cast\<double\>(j/i)

***
#### 回答

先进行j和i的整型除法运算，再将计算结果转换成double类型。