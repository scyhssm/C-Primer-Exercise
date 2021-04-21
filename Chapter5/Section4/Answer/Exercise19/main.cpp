#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b, rsp;
    do {
	cin >> a >> b;
	cout << "the " << (a.size() < b.size() ? a : b) << " is the shortest one." << endl;
	cout << "enter yes to continue:";
	cin >> rsp;
    } while(!rsp.empty() && rsp[0]=='y');
    return 0;
}
