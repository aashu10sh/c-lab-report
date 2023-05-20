#include<stdio.h>

int main(void){
    int user_number,factorial = 1;
    scanf("%d",&user_number);
    for(int i=1;i<=user_number;i++){
        factorial = factorial*i;
    }
    printf("The factorial is %d\n",factorial);
}