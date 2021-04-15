### 判断表达式
***
#### 题目

假设iter的类型是vector\<string\>::iterator，说明下面的表达式是否合法。如果合法，表达式的含义是什么？如果不合法，错在何处？  

(a) *iter++  

(b) (*iter)++  

(c) *iter.empty()  

(d) iter->empty()  

(e) ++*iter  

(f) iter++->empty()

***
#### 回答

(a) 合法，返回迭代器指向的元素，迭代器递增  

(b) 不合法，string无法递增  

(c) 不合法，指针对象没有empty()方法  

(d) 合法，判断iter指向的string是否为空  

(e) 不合法，先解引用，string对象无法递增  

(f) 合法，先判断迭代器指向的string是否为空，迭代器再递增