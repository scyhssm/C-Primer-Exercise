#include <cstddef>
using namespace std;
int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    for (size_t i = 0; i < array_size; ++i) {
        ia[i] = i;
    }
    return 0;
}
