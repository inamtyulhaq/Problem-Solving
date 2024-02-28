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
    int n, rem = 0;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int xi;
        cin >> xi; cin.ignore();
        rem = rem + (xi * xi);
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << rem << endl;
}
