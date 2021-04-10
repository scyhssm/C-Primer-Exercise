### 程序阅读
***
#### 题目

下列的vector对象各包含多少个元素？这些元素的值分别是多少？

```c++
(a) vector<int> v1;
(b) vector<int> v2(10);
(c) vector<int> v3(10, 42);
(d) vector<int> v4{10};
(e) vector<int> v5{10, 42};
(f) vector<string> v6{10};
(g) vector<string> v7{10, "hi"};
```



***
#### 回答

(a) 0个元素；  

(b) 10个初始化为0的int对象；  

(c) 10个初始化为42的int对象；  

(d) 1个初始化为10的int对象；  

(e) 2个初始化为10和42的int对象；  

(f) 10个初始化为空串的string对象；  

(g) 10个初始化为"hi"的string对象；