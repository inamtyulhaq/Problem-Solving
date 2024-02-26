#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Find the sum of the first n odd integers!
 * (e.g. n=4: 1+3+5+7=16)
 **/

int main()
{
    long long rem = 0, n, i = 1; // the number of odd integers
    cin >> n; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    while(n--)
    {
        rem = rem + i;
        i = i + 2;
    }
    cout << rem << endl;
}
