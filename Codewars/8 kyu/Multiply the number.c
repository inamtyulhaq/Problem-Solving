// Question: 
// https://www.codewars.com/kata/5708f682c69b48047b000e07

// Explanation:
// find the count of digits using for loop.
// keep in mind the negative numbers in test cases whle counting digits.
// simply increment the count while counting
// multiply number with 5 raise to the power of count

// Solution:
int multiply(int number) {
    int n1 = number;
    int count = 0;
    if(number>0){
    while(number>0)
      {
        int rem = number % 10;
        number = number / 10;
        count++;
      }
    }
  else
    {
    while(number<0)
      {
        int rem1 = number % 10;
        number = number / 10;
        count++;
      }
    }
     int n = n1 * pow(5, count);
    printf("%d\n", n);
  return n;
}
