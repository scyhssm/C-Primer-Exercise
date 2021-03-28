### 观察程序错误码
***
#### 题目
改写程序，让它返回-1。返回值-1通常被当作程序错误的标识。重新编译并运行你的程序，观察你的系统如何处理main返回的错误标识。  
***
#### 回答
cl编译main.cpp文件，执行后查看其错误标识，错误标识值为-1。  
`echo %ERRORLEVEL%`  