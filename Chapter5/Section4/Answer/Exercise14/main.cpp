#include <string>
#include <iostream>
using namespace std;
int main()
{
    string str;
    string store_str = "";
    int time_str = 0;
    int max_time = 0;
    while(cin >> str) {
	if (store_str=="") {
            time_str = 1;
	    store_str = str;
	    if (time_str > max_time) {
		max_time = time_str;
	    }
	} else if (str == store_str) {
	    ++time_str;
	    if (time_str > max_time) {
                max_time = time_str;
            }
	} else {
	    time_str = 1;
	    store_str = str;
	    if (time_str > max_time) {
                max_time = time_str;
            }
	}
    }
    cout << max_time << endl;
    return 0;
}
