#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item sales_item1;
    Sales_item sales_item2;
    std::cin >> sales_item1;
    std::cin >> sales_item2;
    std::cout << sales_item1 + sales_item2 << std::endl;
    return 0;
}
