### 理解类型转换
***
#### 题目

根本本节给出的变量定义，说明下面的表达式中将发生什么样的类型转换：  

(a) if (fval)  

(b) dval = fval + ival  

(c) dval + ival * cval

***
#### 回答

(a) fval非0转换为bool true，fval为0转换为bool false  

(b) ival转换成float类型，与fval相加，结果转换成double类型  

(c) cval转换成int类型，与ival相乘，结果转换成double类型，和dval相加