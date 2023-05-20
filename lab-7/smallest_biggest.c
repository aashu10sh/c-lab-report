#include<stdio.h>

int main(void){
    int numbers[] = {1,3,-2,4,6,21};
    int smallest = numbers[0] ,greatest = numbers[0];
    for (int  i = 1; i < sizeof(numbers)/sizeof(numbers[0]); i++)
    {
        if(numbers[i]<numbers[i-1]){
            smallest = numbers[i];
        }
        if(numbers[i]>numbers[i-1]){
            greatest = numbers[i];
        }
    }

    printf("The greatest and smallest is %d %d \n",greatest,smallest);
    

}