#include <iostream>
int main()
{
    int *p = nullptr;

    // change p value
    int q = 0;
    p = &q;
    std::cout << *p << std::endl;

    // change *p value
    int t = 10;
    *p = t;
    std::cout << *p << std::endl;
    
    return 0;
}
