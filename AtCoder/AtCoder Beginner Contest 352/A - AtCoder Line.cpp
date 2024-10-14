// https://atcoder.jp/contests/abc352/tasks/abc352_a

// The problem is simple
// If Z comes between X and Y in any case, output YES else output NO.

#include <iostream>

using namespace std;

int main()
{
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    if (X > N || Y > N || Z > N)
    {
        cout << "No" << endl;
    }
    else if (Z >= X && Z <= Y)
    {
        cout << "Yes" << endl;
    }
    else if (Z <= X && Z >= Y)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
