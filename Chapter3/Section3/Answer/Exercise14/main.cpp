#include <iostream>
#include <vector>
int main()
{
    int i;
    std::vector<int> vec;
    while(std::cin >> i) {
        vec.push_back(i);
    }
    return 0;
}
