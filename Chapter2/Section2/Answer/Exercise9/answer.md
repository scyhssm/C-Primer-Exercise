### 找定义错误
***
#### 题目
(a) std::cin >> int input_value;  

(b) int i = { 3.14 };  

(c) double salary = wage = 9999.99  

(d) int i = 3.14;

***
#### 回答
(a) 错误

```c++
int input_value;
std::cin >> input_value;
```

(b) 错误

```c++
int i(3.14);
```

(c) 错误

```c++
double wage = 9999.99, salary = wage;
```

(d) 正确