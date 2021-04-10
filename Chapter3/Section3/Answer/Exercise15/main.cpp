#include <iostream>
#include <string>
#include <vector>
int main()
{
    std::string word;
    std::vector<std::string> vec;
    while(std::cin >> word) {
        vec.push_back(word);
    }
    return 0;
}
