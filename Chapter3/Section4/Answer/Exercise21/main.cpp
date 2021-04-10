#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};


    for(auto iter = v1.begin(); iter != v1.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    for(auto iter = v2.begin(); iter != v2.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    for(auto iter = v3.begin(); iter != v3.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    for(auto iter = v4.begin(); iter != v4.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    for(auto iter = v5.begin(); iter != v5.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    for(auto iter = v6.begin(); iter != v6.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    for(auto iter = v7.begin(); iter != v7.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
