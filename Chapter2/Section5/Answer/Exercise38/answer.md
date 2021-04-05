### 区别decltype和auto
***
#### 题目

说明由decltype指定类型和由auto制定类型有何区别。请举出一个例子，decltype指定的类型与auto指定的类型一样；再举一个例子，decltype指定的类型与auto制定的类型不一样。

***
#### 回答

auto会从等号右边表达式中推断类型，并且令当前变量的类型等于等号右边的类型，值一致；  

decltype往往用于只需要知晓表达式类型的场景，decltype还会保留顶层const；  

类型一样: int a = 0, &r = i; decltype(a) b = a; auto c = a;  

类型不一样: decltype(r) b = r; auto r = r;