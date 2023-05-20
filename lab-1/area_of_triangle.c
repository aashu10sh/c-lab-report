#include<stdio.h>

int main(void){
    int base,height,area;
    printf("Enter Base and Height of your triangle, seperated by ; :");
    scanf("%d;%d",&base,&height);
    area = (float)1/2*base*height;
    printf("The area is %d\n",area);
}
