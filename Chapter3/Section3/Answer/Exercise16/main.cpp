#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "v1: " << v1.size() << endl;
    cout << "v2: " << v2.size() << " " << v2[0] << endl;
    cout << "v3: " << v3.size() << " " << v3[0] << endl;
    cout << "v4: " << v4.size() << " " << v4[0] << endl;
    cout << "v5: " << v5.size() << " " << v5[0] << endl;
    cout << "v6: " << v6.size() << " " << v6[0] << endl;
    cout << "v7: " << v7.size() << " " << v7[0] << endl;

    return 0;
}
