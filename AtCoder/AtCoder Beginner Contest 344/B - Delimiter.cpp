// Question
// https://atcoder.jp/contests/abc344/tasks/abc344_b

// Explanation:
// Firstly took numbers in a vector.
// Made another vector with size of previous vector.
// Simply inputted the elements of 1st vector in 2nd one in reverse order.
// Outputted the 2nd vector.

// Solution:
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int>numbers;
  int num;
  do
  {
    cin >> num;
    numbers.push_back(num);
  } 
  while (num != 0);

  int j = numbers.size();
  int k = 0;

  vector<int>reverse(numbers.size());

  while(j > 0)
  {
    reverse[k] = numbers[j-1];
    j--;
    k++;
  }

  for(int i = 0; i < reverse.size(); i++)
  {
    cout << reverse[i] << endl;
  }

  return 0;
}
