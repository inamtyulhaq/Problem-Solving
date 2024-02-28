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
    string n;
    getline(cin, n);

    int a = n.length();
    for(int i = 0; i < a; i++)
    {
        int b = n[i];
        cout << b;
        if(i != a - 1)
        {
            cout << " ";
        }
    }

    return 0;
}
