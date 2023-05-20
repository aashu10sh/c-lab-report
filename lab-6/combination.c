#include <stdio.h>

int combination(int n, int r);

int main() {
    int n, r;
    printf("Enter the value of n and r : ");
    scanf("%d %d",&n,&r);
    int result = combination(n, r);
    printf("The combination is %d.\n", result);
    return 0;
}

int combination(int n, int r) {
    if(r > n) {
        return 0;
    } else if(r == 0 || n == r) {
        return 1;
    } else {
        return combination(n-1, r-1) + combination(n-1, r);
    }
}
