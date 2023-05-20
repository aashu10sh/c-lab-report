#include<stdio.h>

int getMultipleof3(int number);

int main(void){
    int user_number,multiple;
    printf("Enter upto 3 multiple : ");
    scanf("%d",&user_number);
    multiple = getMultipleof3(user_number);
    printf("The multiple is %d \n",multiple);
}

int getMultipleof3(int number){
    static int final_multiple = 0;
    printf("%d \n",final_multiple);
    if(number == 0){
        return final_multiple;
    }
    final_multiple = final_multiple +3;
    getMultipleof3(number-1);
}