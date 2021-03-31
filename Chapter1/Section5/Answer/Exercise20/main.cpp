#include <iostream>
#include "Sales_item.h"
int main()
{
    for (Sales_item sales_item; std::cin >> sales_item; std::cout << sales_item);
    return 0;
}
