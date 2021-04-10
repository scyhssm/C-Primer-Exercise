#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> text = {"abc", "", "imn"};
    // need to write !(it->empty()) rather than !it->empty()
    for (auto it = text.begin(); it != text.end() && !(it->empty()); ++it) {
        for (auto itc = it->begin(); itc != it->end(); ++itc) {
            *itc = toupper(*itc);
        }
	cout << *it << endl;
    }
    return 0;
}
