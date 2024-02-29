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
    int input, rem1 = 0;
    cin >> input; cin.ignore();

    for(int i = 1; i <=input; i++)
    {
        int rem = input % 10;
        rem1 = rem1 + rem;
        if(input < 10)
        {
            input = input;
            break;
        }
        else if (input > 10)
        {input = input / 10;}        
    }
    int answer = input * rem1;
    cout << answer << endl;
}
