#include <vector>
#include <iterator>
#include <iostream>
using namespace std;
int main()
{
    // array
    int a1[10];
    int a2[9];
    if (end(a1) - begin(a1) == end(a2) - begin(a2)) {
        bool isequal = true;
	for (int *p1 = begin(a1), *p2 = begin(a2); p1 != end(a1); ++p1, ++p2) {
            if (*p1 != *p2) {
		isequal = false;
                break;
	    }
	}
	if (!isequal) {
            cout << "array not equal" << endl;
	}
    } else {
        cout << "array not equal" << endl;
    }

    // vector
    vector<int> v1(10);
    vector<int> v2(9);
    if (v1.size() == v2.size()) {
	bool isequal = true;
	for (auto i = 0; i < v1.size(); ++i) {
            if (v1[i] != v2[i]) {
		isequal = false;
		break;
	    }
	}
	if (!isequal) {
            cout << "vector not equal" << endl;
	}
    } else {
        cout << "vector not equal" << endl;
    }

    return 0;
}
