// https://www.geeksforgeeks.org/problems/reverse-digit0316/1?page=1&difficulty=School&status=solved&sortBy=submissions

// keep on taking the modulo of the number
// keep on multiplying the result variable (initially 0) with 10 and adding the modulo result into it
// keep on dividing the number by 10 to decrease it
// return the result variable

//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    long long int result = 0;
		    while(n!=0)
		    {
		        long long int temp = n % 10;
		        result = (result * 10) + temp;
		        n = n / 10;
		    }
		    return result;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends
