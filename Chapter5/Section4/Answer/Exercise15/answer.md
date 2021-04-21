### 说明循环含义
***
#### 题目

说明下列循环的含义并改正其中的错误。  

```c++
(a) for (int ix = 0; ix != sz; ++ix) { /* ... */ }
    if (ix != sz)
    	// . . .
(b) int ix;
    for (ix != sz; ++ix) { /* ... */ }
(c) for (int ix = 0; ix != sz; ++ix, ++sz) { /*...*/ }
```



***
#### 回答

(a) ix为for中的局部变量，不能在外面被使用

```c++
int ix;
for (ix = 0; ix != sz; ++ix) { /* ... */ }
if (ix != sz)
    // . . .
```

(b) ix如果不需要初始化，也需要for中有分号隔开

```c++
int ix;
for (; ix != sz; ++ix) { /* ... */ }
```

(c) 每次结束都令sz和ix同时加1，会导致for陷入死循环

```c++
for (int ix = 0; ix != sz; ++ix) { /*...*/ }
```

