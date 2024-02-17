#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
  long long j = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0) {
      j = j + i;
    }
  return j; 
}
