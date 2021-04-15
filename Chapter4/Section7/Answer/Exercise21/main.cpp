#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> vi = {1, 2, 3};
    for (auto &i : vi) {
	i = i % 2 == 0 ? i : i * 2;
    }
    for (auto i : vi) {
	cout << i << " ";
    }
    return 0;
}
