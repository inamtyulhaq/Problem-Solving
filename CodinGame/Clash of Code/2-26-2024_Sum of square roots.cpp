#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n, s, rem = 0;
    cin >> n; cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        rem = rem + sqrt(s);
    }
    cout << rem << endl;
    return 0;
}
