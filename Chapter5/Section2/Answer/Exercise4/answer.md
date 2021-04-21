### 程序阅读
***
#### 题目

说明下列例子的含义，如果存在问题，试着修改它。  

(a) while (string::iterator iter != s.end()) { /* ... */ }  

(b) while (bool status = find(word)) { /* .. */ }  

​         if (!status) { /* ... */ }

***
#### 回答

(a) 存在问题，迭代器放在内部且没有初始化，应改为:  

string:: iterator iter = Initialize();  

while (iter!=s.end()) { iter++;}  

(b) 存在问题，bool在循环体内定义，无法在后面的条件语句中被使用，应改为：  

bool status;  

while(status = find(word)) { /* ... */ }  

if (!status) {/* ... */}