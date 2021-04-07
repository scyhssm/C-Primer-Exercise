#include <iostream>
#include <string>
using std::endl;
using std::string;
using std::cin;
using std::cout;
int main()
{
    string str;
    string str1, str2;
    while(cin >> str) {
        str1 += str;
	str2 += str + " ";
    }
    cout << str1 << endl;
    cout << str2 << endl;
}
