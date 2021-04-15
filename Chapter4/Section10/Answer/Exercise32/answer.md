### 程序解释
***
#### 题目

解释下面这个循环的含义。

```c++
constexpr int size = 5;
int ia[size] = {1,2,3,4,5};
for (int *ptr = ia, ix = 0; ix != size && ptr != ia+size; ++ix,++ptr) {}
```



***
#### 回答

通过下表和指针的递增，遍历数组。