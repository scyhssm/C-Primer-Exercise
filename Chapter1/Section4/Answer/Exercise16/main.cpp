#include <iostream>
int main()
{
    int sum = 0, value = 0;
    // on windows platform, input EOF can use ctrl + z; OS X use ctrl + D
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
