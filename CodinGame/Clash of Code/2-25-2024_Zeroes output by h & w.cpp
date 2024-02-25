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
    int height;
    cin >> height; cin.ignore();
    int width;
    cin >> width; cin.ignore();

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    for(int i = 1; i <= height; i++)
    {
        cout << "O";
        for(int j = 1; j < width; j++)
        {
            cout << "O";
        }
        cout << endl;
    }
    return 0;
}
