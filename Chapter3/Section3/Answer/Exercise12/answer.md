### 程序阅读
***
#### 题目

下列vector对象的定义有不正确的吗？如果有，请指出来。对于正确的，描述其执行结果；对于不正确的，说明其错误的原因。

```c++
(a) vector<<vector<int>>> ivec;
(b) vector<string> svec = ivec;
(c) vector<string> svec(10,"null");
```



***
#### 回答

(a) 正确，vector是模板，vector\<int\>是类型，可以用类型进一步定义vector\<vector\<int\>\>  

(b) 不正确，不是同一种类型，静态编译类型检查会报错  

(c) 正确，svec中初始化10个值为"null"的字符串