#include<stdio.h>
#define PI 3.14

int main(void)
{
    int radius,area;
    printf("Enter radius of circle :");
    scanf("%d",&radius);
    area = PI *radius*radius;
    printf("The area is %d\n",area);
}
