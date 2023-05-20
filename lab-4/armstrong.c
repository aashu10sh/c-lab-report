#include<stdio.h>

int checkArmStrong(int num);

int main(void){
    for(int i=1;i<=500;i++){
        if(checkArmStrong(i)){
            printf("Given Number %d is armstrong \n",i);
        }
    }
}

int checkArmStrong(int user_number){
    int first_digit,temp,last_digit,middle_digit;
    first_digit=user_number/100;
    temp=user_number%100;
    last_digit=temp%10;
    middle_digit=temp/10;

    if(((first_digit*first_digit*first_digit) + (middle_digit*middle_digit*middle_digit) + (last_digit*last_digit*last_digit)) == user_number){
        return 1;
    }
    return 0;
}