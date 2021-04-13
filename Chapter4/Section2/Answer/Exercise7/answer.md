### 写表达式
***
#### 题目

溢出是何含义？写出三条将导致溢出的表达式。

***
#### 回答

short s = -32768; --s;  

unsigned int s = 0; --s;  

unsigned short s = 65535; ++s;