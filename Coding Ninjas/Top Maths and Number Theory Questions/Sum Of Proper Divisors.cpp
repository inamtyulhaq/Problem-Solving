// Question
// https://www.codingninjas.com/studio/problems/divisor-sum_975476?topList=top-maths-and-number-theory-questions&problemListRedirection=true

// Explanation:
// loop from one till that number (exclusive).
// if number is properly divisible by any number in loop
// simply add it to sum variable initially 0.
// output the sum variable

// Solution:
#include <bits/stdc++.h> 
/*
    Time Complexity: O(N)
    Space Complexity: O(1)

     where N is the given natural number.
*/


int sumOfProperDivisors(int n){

    int ans = 0;

    for(int i = 1; i < n; i++){

        if(n % i ==0)
            ans += i;

    }

    return ans;

}
