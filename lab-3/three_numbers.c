#include<stdio.h>




int main(void){
    int num1,num2,num3,greatest;
    printf("Enter Three Numbers Sequentially : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        greatest = num1;
        goto End;
    }
    if(num2>num1 && num2>num3){
        greatest = num2;
        goto End;
    }
    if(num3>num1 && num3>num2){
        greatest = num3;
        goto End;
    }
    printf("The numbers provided are invalid or equal");
    End:
        printf("%d is the greatest number ",greatest);
        return 0;
}