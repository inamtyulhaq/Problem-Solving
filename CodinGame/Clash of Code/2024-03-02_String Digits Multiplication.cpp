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
    string num;
    int rem1 = 1;
    cin >> num; cin.ignore();
    int l = num.length();
    int num1 = stoi(num);
    for(int i = 0; i < l; i++)
    {
        int rem = num1 % 10;
        rem1 = rem1 * rem;
        num1 = num1 / 10;
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << rem1 << endl;
}
