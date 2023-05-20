#include<stdio.h>

int addUpton(int number);

int main(void){
    int user_int;
    printf("Enter the digit upto which you want sum : ");
    scanf("%d",&user_int);

    int sum = addUpton(user_int);
    printf("The Sum is %d \n",sum);
    return 0;

}

int addUpton(int number){
    static int answer = 0;
    if(number == 0){
        return answer;
    }
    answer += number;
    number = number -1;
    addUpton(number);
}