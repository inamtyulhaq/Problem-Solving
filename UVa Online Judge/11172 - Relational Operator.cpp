// Question:
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=23&page=show_problem&problem=2113

// Explanation:
// It is an easy problem.
// If first number is less than 2nd number, court ">"
// and vice versa for greater than.
// If both are same, output "=".

// Solution:
#include <iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if(a < b)
        {
            cout << "<" << endl;
        }
        else if(a > b)
        {
            cout << ">" << endl;
        }
        else if(a == b)
        {
            cout << "=" << endl;
        }
    }
    
    return 0;
}
