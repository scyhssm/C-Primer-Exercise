#include <string>
#include <iostream>
int main()
{
    std::string str = "Hello wrold!";
    for (auto &c : str) {
        c = 'X';
    }
    std::cout << str<< std::endl;
    return 0;
}
