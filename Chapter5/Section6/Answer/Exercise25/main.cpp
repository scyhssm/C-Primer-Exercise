#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    int a, b;
    while (cin >> a >> b) {
        try {
	    if (b == 0 ) {
	        throw runtime_error("divisor is 0");
	    } else {
		cout << a / b << endl;
	    }
	}
        catch (runtime_error err) {
	    char c;
	    cout << err.what() << endl;
	    cout << "Try again? type y:";
	    cin >> c;
	    if (c == 'y') {
		cout << "enter two integer:" << endl;
		continue;
	    }
	}
    }
    return 0;
}
