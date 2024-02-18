#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int c;
    scanf("%d", &c);

    int income = (a*6) * 5 * 4;
    int rent = b;
    int miscl = c;
    int c1 = income - miscl;
    if(b <= c1)
    {
        printf("true");
    }
    else{
        printf("false");
    }

    return 0;
}
