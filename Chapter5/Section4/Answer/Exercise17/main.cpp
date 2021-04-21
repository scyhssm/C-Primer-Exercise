#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v1 = {0, 1, 1, 2};
    vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
    bool flag = true;
    for (int i = 0; i < v1.size() && i < v2.size(); ++i) {
	if (v1[i] != v2[i]) {
	    flag = false;
	}
    }
    cout << flag << endl;
    return 0;
}
