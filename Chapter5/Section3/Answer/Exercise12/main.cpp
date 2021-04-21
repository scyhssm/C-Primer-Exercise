#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = " \t\nflfiffi";
    cout << str << endl;
    int vowelCnt = 0;
    for(auto i = 0; i < str.size(); ++i){
        switch(str[i]) {
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
	    case 'f':
		if (i+1 < str.size()) {
	            switch(str[i+1]) {
			case 'i':
		        case 'l':
		        case 'f':
			    ++vowelCnt;
			    break;
			default:
			    break;
		    }
		}
		break;
	    default:
	        break;
	}
    }
    cout << vowelCnt;
    return 0;
}
