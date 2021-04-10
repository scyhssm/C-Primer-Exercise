#include <string>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    string s1 = "hello";
    string s2 = "world";
    if (s1 == s2) {
        cout << "equal" << endl;
    } else {
	cout << "not equal" << endl;
    }

    const char ca1[] = "hello";
    const char ca2[] = "world";
    if (strcmp(ca1, ca2) == 0) {
	cout << "euqal" << endl;
    } else {
        cout << "not equal" << endl;
    }
    return 0;
}
