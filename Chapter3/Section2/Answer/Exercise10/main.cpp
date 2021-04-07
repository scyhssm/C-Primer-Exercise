#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string out_str;
    for (auto c : str) {
        if (!ispunct(c)) {
            out_str += c;
	}
    }
    cout << out_str << endl;
    return 0;
}
