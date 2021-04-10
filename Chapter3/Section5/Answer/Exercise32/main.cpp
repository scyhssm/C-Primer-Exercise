#include <cstddef>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t i = 0; i < array_size; ++i) {
        ia[i] = i;
    }

    int ia2[array_size];
    for (size_t i = 0; i < array_size; ++i) {
        ia2[i] = ia[i];
    }

    // vector version
    vector<int> vi(10);
    for (int i = 0; i < array_size; ++i) {
	vi[i] = i;
    }
    vector<int> vi2(vi);
    for (int i = 0; i < array_size; ++i) {
	cout << vi2[i] << " ";
    }
    return 0;
}
