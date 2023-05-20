#include <stdio.h>

int sumOfDigits(int num);

int main() {
    int user_number;
    printf("Enter a number: ");
    scanf("%d", &user_number);
    int sum = sumOfDigits(user_number);
    printf("The sum is %d.\n", sum);
    return 0;
}

int sumOfDigits(int num) {
    if(num == 0) {
        return 0;
    } else {
        return (num % 10) + sumOfDigits(num / 10);
    }
}