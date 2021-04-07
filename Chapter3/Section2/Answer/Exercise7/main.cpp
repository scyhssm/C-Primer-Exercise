#include <string>
#include <iostream>
int main()
{
    std::string str = "Hello wrold!";
    // 使用char无影响，但要注意字符类型还有宽字符，unsigned char，unicode char
    for (char &c : str) {
        c = 'X';
    }
    std::cout << str<< std::endl;
    return 0;
}
