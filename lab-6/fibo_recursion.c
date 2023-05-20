#include<stdio.h>

int fibo(int number);

int main(void){
    int user_number;
    printf("Enter User Number to get factorial : ");
    scanf("%d",&user_number);

    for(int i=1;i<=user_number;i++){
        printf("%d \t",fibo(i));
    }
    return 0;
}

int fibo(int number){
    if(number == 0 || number == 1){
        return number;
    }
    return fibo(number-2 ) + fibo(number-1);

}