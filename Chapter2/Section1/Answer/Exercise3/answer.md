### 读程序写结果

***
#### 题目
```c++
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;

int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

 

***
#### 回答
```c++
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;  // 32
std::cout << u - u2 << std::endl;  // 溢出

int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;  // 32
std::cout << i - i2 << std::endl;  // -32
std::cout << i - u << std::endl;   // 0
std::cout << u - i << std::endl;   // 0
```

