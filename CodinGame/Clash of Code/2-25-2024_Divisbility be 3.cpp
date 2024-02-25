#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main() {
  int n, sum = 0;
  cin >> n;
  cin.ignore();

  // Write an answer using cout. DON'T FORGET THE "<< endl"
  // To debug: cerr << "Debug messages..." << endl;

  

  for (int i = 0; i <= 999; i++) {
    int rem = n % 10;
    sum = sum + rem;
    n = n / 10;
  }

if (sum < 0) {
    cout << "no negative numbers" << endl;
  }
  else if (sum % 3 == 0) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  return 0;
}
