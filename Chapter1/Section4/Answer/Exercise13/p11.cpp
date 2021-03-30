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
    for (; x <= y; ++x) {
        std::cout << x << std::endl;
    }
    return 0;
}
