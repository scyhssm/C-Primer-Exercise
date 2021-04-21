### 改正程序
***
#### 题目

改正下列代码段中的错误。  

```c++
(a) if (ival1 != ival2) 
        ival1 = ival2
    else ival1 = ival2 = 0;
(b) if (ival < minval)
        minval = ival;
        occurs = 1;
(c) if (int ival = get_value())
        cout << "ival = " << ival << endl;
    if (ival)
        cout << "ival = 0\n";
(d) if (ival = 0)
        ival = get_value();
```



***
#### 回答

```c++
(a) if (ival1 != ival2) 
        ival1 = ival2;
    else ival1 = ival2 = 0;
(b) if (ival < minval) {
        minval = ival;
        occurs = 1;
    }
(c) if (int ival = get_value())
        cout << "ival = " << ival << endl;
    else (ival)
        cout << "ival = 0\n";
(d) if (ival == 0)
        ival = get_value();
```

