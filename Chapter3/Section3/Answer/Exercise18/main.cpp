#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 下面的程序不合法，需要修改
    // vector<int> ivec;
    // ivec[0] = 42;

    vector<int> ivec(1);
    ivec[0] = 42;

    return 0;
}
