### 说明循环含义
***
#### 题目

说明下列循环的含义并改正其中的错误。

```c++
(a) do 
        int v1, v2;
        cout << "Please enter two numbers to sum:" ;
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
    while (cin);
(b) do {
        // . . .
    } while (int ival = get_response());
(c) do {
        ival = get_response();
    } while (ival);
```



***
#### 回答

(a) do后面跟的语句要用大括号括起来

```c++
do {
    int v1, v2;
    cout << "Please enter two numbers to sum:" ;
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
} while (cin);
```

(b) 不应该ival中初始化int

```c++
int ival;
do {
    // . . .
} while (ival = get_response());
```

(c) 不应该把定义在do中的变量带到while

```c++
int ival;
do {
    ival = get_response();
} while (ival);
```

