#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int x, y;
    cout << "enter two integer, we will print all number in two integer:" << endl;
    cin >> x >> y;
    if (x > y) {
        int tmp = x;
	x = y;
	y = tmp;
    }
    while (x <= y) {
        cout << x << endl;
	++x;
    }
    return 0;
}
