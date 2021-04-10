#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int value;
    vector<int> v;
    while (cin >> value) {
        v.push_back(value);
    }

    for (int i = 0; i < v.size() - 1; ++i) {
        cout << v[i] + v[i + 1] << " ";
    }
    cout << endl;

    for (int i = 0; i < v.size()/2; ++i) {
        cout << v[i] + v[v.size() - 1 - i] << " ";
    }
    return 0;
}
