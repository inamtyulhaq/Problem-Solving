#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int m;
    cin >> m; cin.ignore();
    int y;
    cin >> y; cin.ignore();
    if(m == 1 || m == 3 ||m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        cout << 31 << endl;
    }
    else if(m == 4 || m == 6 ||m == 9 || m == 11)
    {
        cout << 30 << endl;
    }

    if(m==2)
    {
        if(y%4==0 || y%400==0)
        {
            cout << 29 << endl;
        }
        else
        {
            cout << 28 << endl;
        }
    }
}
