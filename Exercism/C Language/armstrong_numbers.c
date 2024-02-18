#include "armstrong_numbers.h"
bool is_armstrong_number(int candidate)
{
    int num = candidate;
    int num1 = num;
    // bool choice;
    int count = 0;
    int n1 = 0;
    while(num!=0)
    {
        num = num/10;
        count++;
    }
    while(candidate!=0)
    {
        int rem = candidate % 10;
        n1 = n1 + pow(rem, count);
        candidate = candidate / 10;
    }
    if(num1 == n1)
    {
        return true;
    }
    else if(num1 != n1)
    {
        return false;
    }
return 0;
}
