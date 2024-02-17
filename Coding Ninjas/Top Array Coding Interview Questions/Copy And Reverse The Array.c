#include <bits/stdc++.h> 
vector<int> copyAndReverse(vector<int> arr, int n) {
	vector<int> arr1(n);
	for(int i = n-1; i >= 0; i--)
	{
		arr1[n-1-i] = arr[i];
	}
	return arr1;
}	
