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
    int x, d = 1;
    cin >> x; cin.ignore();
    int k = x-1;
    int m = 2;
    if(x%2==0)
    {
        for(int i = 0; i < x; i++)
        {
            cout << "*";
            for(int j = 0; j < x-1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if(x%2!=0)
    {
        for(int i = 0; i < x; i++)
        {
            while(k--)
            {cout << " ";}
            for(int j = 0; j < d; j++)
            {
                cout << "*";
            }
            cout << endl;
            d++;
            k = x - m;
            m++;
        }
    }
}
