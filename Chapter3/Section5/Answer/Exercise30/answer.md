### 程序阅读
***
#### 题目

指出下面代码中的索引错误。

```c++
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
    ia[ix] = ix;
```



***
#### 回答

ix应当从0增长到array_size-1.

