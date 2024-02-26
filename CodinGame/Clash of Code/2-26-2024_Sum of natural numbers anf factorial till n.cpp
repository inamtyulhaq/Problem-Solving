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
    int n, rem = 0, rem1 = 1;
    cin >> n; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    for(int i = 1; i <=n; i++)
    {
        rem = rem + i;
    }
    for(n; n >=1; n--)
    {
        rem1 = rem1 * n;
    }
    int a = rem+rem1;
    cout << a << endl;
}
