#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int vowelCnt = 0;
    for(auto c: str){
        switch(c) {
	    case 'a':
	    case 'e':
            case 'i':
	    case 'o':
	    case 'u':
		++vowelCnt;
	    break;
	    default:
	    break;
	}
    }
    cout << vowelCnt;
    return 0;
}
