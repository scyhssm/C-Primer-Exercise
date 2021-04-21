#include <iostream>
using namespace std;
int main()
{
    int val = 0, sum = 0;
    // low readable
    while((++val, val <= 10)) {
        sum += val;
    }
    cout << sum << endl;
    return 0;
}
