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
    long long n;
    cin >> n; cin.ignore();
    long long sum = 0, sum1 = 0, sum2 = 0;
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
        sum1 = sum1 + (i*i);
        sum2 = sum2 + (i*i*i);
    }
    cout << sum << endl;
    cout << sum1 << endl;
    cout << sum2 << endl;
return 0;
}
