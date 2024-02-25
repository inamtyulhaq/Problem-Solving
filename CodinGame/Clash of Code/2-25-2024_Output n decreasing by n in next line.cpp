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
    int n;
    cin >> n; cin.ignore();
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    for(int i = 1; i <= n; i++)
    {
        cout << n;
        int l = n;
        for(int j = i; j <= l - 1; j++)
        {
            cout << n;
        }
        cout << endl;
        l = l - 1;
    }
    return 0;
}
