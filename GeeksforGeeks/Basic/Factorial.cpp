// Question
// https://www.geeksforgeeks.org/problems/factorial5739/1?page=1&status=solved&sortBy=submissions

// Explanation
// Loop from 1 till that number inclusive
// Multiply all i's
// Output the integer
// Lol, I used sum variable instead of multiply variable

// Solution
class Solution{
public:
    long long int factorial(int N){
        long long sum = 1;
        for(int i = 1; i <= N; i++)
        {
            sum = sum * i; 
        }
        return sum;
    }
};
