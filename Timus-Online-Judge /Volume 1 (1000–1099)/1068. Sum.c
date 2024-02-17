#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    if(n >= 1){
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    }
    else if(n < 1){
    for(int i = 1; i >= n; i--){
        sum += i;
    }
    }
    printf("%d", sum);

    return 0;
}
