// Question:
/*https://www.geeksforgeeks.org/problems/armstrong-numbers2727/0*/

// Explanation:
/*Firstly found out the number of digits. Then kept on taking remainder of
digits till the number gets zero and taking power of digits to the number of digits and adding to variable "trem".
If original number is equal to the term, printed "Yes".*/

// Solution:
class Solution {
  public:
    string armstrongNumber(int n){
        int num = n;
        int trem = 0, count = 0;
        
        while (n != 0) 
        {
            n /= 10;
            count++;
        }
        
        n = num;
        
        while (n != 0) {
        int rem = n % 10;
        trem += pow(rem, count);
        n /= 10;
        }
        
        if(num == trem)
        {
            return "Yes";
        }
        else if (num != trem)
        {
            return "No";
        }
    }
};
