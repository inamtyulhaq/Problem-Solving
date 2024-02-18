// Question:
/*https://www.codewars.com/kata/542c0f198e077084c0000c2e*/

// Explanation:
/*kept on increasing count and kept on decreasing n. count increases only if n is totally divisble by any number.*/

// Solution:
#include <stdio.h>
int divisors(int n) {
  int d, count=0;
  for(int i = 1; i <= n; i++){
    d = n%i;
    if(d == 0){
      count = count + 1;
    }
  }
  printf("%d", count);
  return count;
}
