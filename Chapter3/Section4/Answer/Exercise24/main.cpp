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

    for (auto iter = v.cbegin(); iter != (v.cend() - 1); ++iter) {
        cout << *iter + *(iter+1) << " ";
    }
    cout << endl;

    for (int i = 0; i < v.size()/2; ++i) {
        cout << *(v.cbegin() + i) + *(v.cend() - 1 - i) << " ";
    }
    return 0;
}
