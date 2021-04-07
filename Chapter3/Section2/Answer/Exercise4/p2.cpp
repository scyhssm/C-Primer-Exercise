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
        if (a.size() > b.size()) {
            cout << a;
	} else if (a.size() < b.size()) {
            cout << b;
	}
    }
    return 0;
}
