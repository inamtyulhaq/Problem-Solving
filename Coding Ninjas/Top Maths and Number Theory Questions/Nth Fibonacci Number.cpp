// Question
// https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?topList=top-maths-and-number-theory-questions&problemListRedirection=true

// Explanation:
// for 1st and 2nd numbers, fibonnaci number would be 0 and 1.
// else use same temp swap technique and save that fibonnaci number whose index was given in another variable
// output the fibonnaci number.

// Solution:
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int num0=0;
        int num1=1;
        int num2=2;
        int n;
        cin >> n;
        if(n==1)
        {
                cout << num1;
        }
        else if (n==2)
        {
                cout << num2;
        }
        else if(n>=3)
        {
                for(int i = 0; i<=n; i++)
                {
                int temp = num0;
                num0=num1;
                num1=temp+num1;
                if (i == n) {
                  cout << temp << endl;
                }
        }
        }
        return 0;
}
