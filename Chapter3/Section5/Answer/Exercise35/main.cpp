#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int *p = a;
    int *pe = a + 10;
    while (p != pe) {
        *p = 0;
	++p;
    }
    for (auto i: a) {
        cout << i << " ";
    }
    return 0;
}
