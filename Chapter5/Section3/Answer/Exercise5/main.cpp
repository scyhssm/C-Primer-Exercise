#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    const vector<string> v = { "F", "D", "C", "B", "A", "A++" };
    int grade;
    string lettergrade;
    cin >> grade;
    if (grade < 60) {
        lettergrade = v[0];
    } else {
	lettergrade = v[(grade-50)/10];
    }
    cout << lettergrade << endl;
    return 0;
}
