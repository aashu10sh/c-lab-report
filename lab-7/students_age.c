#include<stdio.h>
#define NUMBER 10

int main(void){
    int students[NUMBER];
    for(int i=0;i<NUMBER;i++){
        printf("Enter age of student no %d :",i+1);
        scanf("%d",&students[i]);
    }

    for(int i=0;i<NUMBER;i++){
        printf("age of student no %d : %d \n",i+1,students[i]);
    }
}