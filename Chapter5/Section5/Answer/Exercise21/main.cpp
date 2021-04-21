#include <iostream>
#include <string>
using namespace std;
int main()
{
    string store_str, str;
    while (cin >> str) {
	if (store_str == str) {
	    if (store_str[0] >= 'A' && store_str[0] <= 'Z') {
	        break;
	    } else {
		continue;
	    }
	} else {
	    store_str = str;
	}
    }
    if (cin.eof()) {
	cout << "no string repeate." << endl;
    } else {
	cout << store_str << endl;
    }
    return 0;
}
