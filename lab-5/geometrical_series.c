#include<stdio.h>

int main(void){
    int user_n;
    printf("Enter User Num : ");
    scanf("%d",&user_n);
    double sum = 1.0 + 0.5;

    for(int i=2;i<user_n;i++){
        sum = sum + (float)1/((float)i* (float)i);
    }
    printf("Sum upto that series is : %f ",sum);
}