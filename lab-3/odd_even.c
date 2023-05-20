#include<stdio.h>

int main(void){
    int user_number;
    printf("Enter Your Number :");
    scanf("%d",&user_number);
    if(user_number %2 ==0){
        printf("The given number is Even");
    }else{
        printf("The given number is odd");
    }
    return 0;
}