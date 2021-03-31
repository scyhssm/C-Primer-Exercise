#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item;
    if(std::cin >> item) {
        int sum = 1;
	Sales_item tmp = item;
        while(std::cin >> item) {
            if (item.isbn() == tmp.isbn()) {
	        ++sum;
	    } else {
	        std::cout << tmp.isbn() << " number is :" << sum << std::endl;
		tmp = item;
		sum = 1;
	    }
	}
	std::cout << tmp.isbn() << " number is :" << sum << std::endl;
    } else {
        std::cerr << "No Data." << std::endl;
    }
    return 0;
}
