#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    const char ca1[] = "hello,";
    const char ca2[] = "world.";
    
    // standard length should be 13
    char ca3[1];
    strcpy(ca3, ca1);
    cout << ca3 << endl;

    strcat(ca3, ca2);
    cout << ca3 << endl;

    return 0;
}
