### 程序阅读
***
#### 题目

下面的范围for语句合法吗？如果合法，c的类型是什么？

```c++
const string s = "keep out";
for (auto &c : s) {
}
```



***
#### 回答

合法，c的类型是const char，但不可以被修改。如果将auto改变为char，则const char -> char编译报错。