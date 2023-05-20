#include<stdio.h>

int main(void){
    int length,breadth,area;
    printf("Enter Length and Breadth of Rectangle seperated by ; :");
    scanf("%d;%d",&length,&breadth);
    area = length*breadth;
    printf("The area is %d\n",area);
}
