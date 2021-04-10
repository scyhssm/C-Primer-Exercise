#include <vector>
using namespace std;
int main()
{
    vector<int> iv(10, 0);
    int ia[10];

    for (auto i = 0; i < iv.size(); ++i) {
	ia[i] = iv[i];
    }
    return 0;
}
