### 理解类型转换
***
#### 题目

假设有如下的定义，  

char cval;  

int ival;  

unsigned int ui;  

float fval;  

double dval;  

请回答下面表达式是否发生隐式转换？如果有，指出来。  

(a) cval = 'a' + 3;  

(b) fval = ui - ival * 1.0;  

(c) dval = ui * fval;  

(d) cval = ival + fval + dval;

***
#### 回答

(a) 'a'转成int，计算结果转成char  

(b) ival转成double，ui转成double，结果转成float  

(c) ui转成float，结果转成double  

(d) ival转成float，和fval相加结果转成double，最终结果转成char