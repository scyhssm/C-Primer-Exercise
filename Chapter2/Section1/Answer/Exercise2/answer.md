### 数据类型选择
***
#### 题目
计算按揭贷款时，对于利率、本金和付款分别应选择何种数据类型？说明你的理由。 

***
#### 回答
利率和付款应当使用double，按揭贷款场景需要较为精确的计算，且double效率不弱于float；本金用int即可，一般按揭贷款的不会用到long这么大的数字。