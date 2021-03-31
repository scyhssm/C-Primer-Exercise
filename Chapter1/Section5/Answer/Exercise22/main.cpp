#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item sum;
    Sales_item sample;
    while(std::cin >> sample) {
        sum += sample;
    }
    std::cout << sum << std::endl;
    return 0;
}
