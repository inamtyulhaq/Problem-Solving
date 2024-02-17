#include <stdio.h>

int main() {
    int h, l;
    scanf("%d %d", &h, &l);
    int l1 = (h + l) - (l + 1);
    int h1 = (h + l) - (h + 1);
    printf("%d %d", h1, l1);
    
    return 0;
}
