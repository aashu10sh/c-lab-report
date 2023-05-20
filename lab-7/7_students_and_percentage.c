#include<stdio.h>
#define NUMBERS 7
void print_data(int total_marks, int percentage){
    printf("Total Marks : %d\n",total_marks);
    printf("Percentage : %d\n",percentage);

}


int main(void){
    int total_marks;
    float percentage;
    int marks[NUMBERS];
    for(int i=0;i<NUMBERS;i++){
        printf("Enter Marks of student no : %d : ",i+1);
        scanf("%d",&marks[i]);
        total_marks += marks[i];
    }
    percentage = (float)total_marks/700*100;
    print_data(total_marks,percentage);

}