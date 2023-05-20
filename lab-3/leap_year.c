#include<stdio.h>

int main(void){
    int user_leap_year;
    printf("Please Enter Your Leap Year : ");
    scanf("%d",&user_leap_year);
    if(user_leap_year%4 ==0 || user_leap_year %100 == 0 || user_leap_year %400 == 0){
        printf("The given year is a leap year");
    }
    return 0;
}