### 程序阅读
***
#### 题目

下列数组中元素的值是什么？

```c++
string sa[10];
int ia[10];
int main() {
    string sa2[10];
    int ia2[10];
}
```



***
#### 回答

sa和ia中的字符串和整型分别为空字符串和0，sa2的元素值为空字符串，ia2元素值是未定义的。  

在函数体内部的内置类型不会被初始化，内置类型有bool,char,wchar_t,char16_t,char32_t,short,int,long,long long,float,double,long double；string不属于内置类型，所以会被初始化为空字符串。

