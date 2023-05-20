#include<stdio.h>
int factorial(int number);

int main(void){
    int number;
    printf("Enter Number to get factorial : ");
    scanf("%d",&number);
    int factorial_final;
    factorial_final = factorial(number);

    printf("The Factorial is : %d \n",factorial_final);
    return 0;
}

int factorial(int number){
    static int factorial_final  = 1;
    if(number == 0){
        return factorial_final;
    }
    factorial_final = factorial_final*number;
    number = number-1;
    factorial(number);
}