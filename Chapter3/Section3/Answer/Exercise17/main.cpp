#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main()
{
    vector<string> v;
    string word;
    while(cin >> word) {
        v.push_back(word);
    }
    for(int i = 0; i < v.size(); i++) {
        for(auto &c: v[i]) {
            c = toupper(c);
	}
    }
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
