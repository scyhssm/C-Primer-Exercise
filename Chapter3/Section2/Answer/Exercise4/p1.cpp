#include <iostream>
#include <string>
using std::endl;
using std::cin;
using std::cout;
using std::string;
int main()
{
    string a, b;
    while(cin >> a >> b) {
        if (a > b) {
            cout << a;
	} else if (a <b) {
            cout << b;
	}
    }
    return 0;
}
