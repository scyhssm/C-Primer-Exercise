#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = " \t\n";
    cout << str;
    int vowelCnt = 0;
    for(auto c: str){
        switch(c) {
	    case 'a':
	    case 'e':
            case 'i':
	    case 'o':
	    case 'u':
            case 'A':
            case 'E':
	    case 'I':
	    case 'O':
	    case 'U':
	    case ' ':
	    case '\t':
	    case '\n':
		++vowelCnt;
	        break;
	    default:
	    break;
	}
    }
    cout << vowelCnt;
    return 0;
}
