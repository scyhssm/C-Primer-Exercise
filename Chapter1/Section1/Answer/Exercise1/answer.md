### 编译器文档查阅
***
#### 题目
查阅你使用的编译器的文档，确定它所使用的文件命名约定。编译并运行第2页的main程序。  
***
#### 回答
我这边的系统环境是Windows，IDE是Visual Studio 2019，所以用MSVC编译器编译源文件。在命令行直接调用cl不行，要配置编译器的环境变量才可以。  

cl环境变量配置参考 [Vukr的知乎博客](https://zhuanlan.zhihu.com/p/98384105)  

MSVC编译器文档地址 [cl编译器命令行语法](https://docs.microsoft.com/zh-cn/cpp/build/reference/compiler-command-line-syntax?view=msvc-160)  

编译运行结果不展示了，第2页那个main文件实际上执行也没有任何结果，不过可以看下执行完程序的状态码。  
`echo %ERRORLEVEL%`  
