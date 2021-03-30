#include <iostream>
int main()
{
    int x, y;
    std::cout << "enter two integer, we will print all number in two integer:" << std::endl;
    std::cin >> x >> y;
    if (x > y) {
        int tmp = x;
	x = y;
	y = tmp;
    }
    while (x <= y) {
        std::cout << x << std::endl;
	++x;
    }
    return 0;
}
