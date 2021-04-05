### 阅读程序
***
#### 题目

下面的哪些初始化是合法的？请说明原因。  

(a) int i, *const cp;  

(b) int *p1, *const p2;

(c) const int ic, &r = ic;  

(d) const int *const p3;  

(e) const int *p;

***
#### 回答

(a) i合法，cp不合法，cp作为常量指针，必须先初始化；  

(b) p1合法，p2不合法，理由同上(a)的cp;  

(c) ic不合法，r合法，ic作为常量必须先初始化;  

(d) p3不合法，没有初始化；  

(e) p合法，它是指向常量的指针而不是常量指针，不需要对其先初始化；

