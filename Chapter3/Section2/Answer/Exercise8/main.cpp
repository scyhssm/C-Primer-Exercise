#include <string>
#include <iostream>
int main()
{
    std::string str = "Hello wrold!";
    std::string::size_type i = 0;
    while (i < str.size()) {
        str[i] = 'X';
	++i;
    }
    std::cout << str<< std::endl;
    // 明显放在一个for里面更加简洁
    str = "Hello wrold!";
    for (std::string::size_type i = 0; i < str.size(); ++i) {
        str[i] = 'X';
    }
    std::cout << str<< std::endl;
    return 0;
}
