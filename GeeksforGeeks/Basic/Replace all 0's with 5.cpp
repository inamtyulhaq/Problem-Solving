// https://www.geeksforgeeks.org/problems/replace-all-0-with-5-in-an-input-integer/1

// simply convert int to string
// replace all 0s with 5s
// convert string to integer
// and return

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    string nString = to_string(n);
    for(int i = 0; i < nString.size(); i++)
    {
        if(nString[i] == '0')
        {
            nString[i] = '5';
        }
    }
    n = stoi(nString);
    return n;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends
