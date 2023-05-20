#include<stdio.h>

int checkIsosceles(int side1, int side2, int side3);
int checkEquilateral(int side1, int side2, int side3);
int checkRightangled(int side1, int side2, int side3);

int main(void){
    int triangle_side_1,triangle_side_2,triangle_side_3;
    printf("Enter three sides of a triangle : ");
    scanf("%d %d %d",&triangle_side_1,&triangle_side_2,&triangle_side_3);

    if(checkEquilateral(triangle_side_1, triangle_side_2,triangle_side_3)){
        printf("The given Triangle is an equilateral triangle \n");
        return 0;
    }
    if(checkIsosceles(triangle_side_1,triangle_side_2,triangle_side_3)){
        printf("The given Triangle is an isosceles triangle \n");
        return 0;
    }
    if(checkRightangled(triangle_side_1,triangle_side_2,triangle_side_3)){
        printf("The given Triangle is an right angled triangle \n");
        return 0;
    }
    printf("The given triangle is an scelene triangle");

    return 0;
    
}

int checkEquilateral(int side1, int side2, int side3){
    if(side1 == side2 && side2 == side3){
        return 1;
    }
    return 0;
}

int checkIsosceles(int side1, int side2, int side3){
    if(side1 == side2 || side2 == side3 || side3 == side1){
        return 1;
    }
    return 0;
}

int checkRightangled(int side1, int side2, int side3){
    if((side1*side1)+(side2*side2)==(side3*side3) || (side1*side1)+(side3*side3)==(side2*side2) || (side2*side2)+(side3*side3)==(side1*side1) ){
        return 1;
    }
    return 0;
}