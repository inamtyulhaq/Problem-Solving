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
    int n, i = 1, rem = 0;
    cin >> n; cin.ignore();

    for(n; i<=10; i++)
    {
        rem = i * n;
        cout << rem;
        if(i!=10)
        {
        cout << " ";
        }
    }
}
