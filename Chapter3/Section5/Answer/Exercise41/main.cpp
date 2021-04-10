#include <vector>
#include <iterator>
using namespace std;
int main()
{
    int ia[10] = {};
    vector<int> iv(begin(ia), end(ia));
    return 0;
}
