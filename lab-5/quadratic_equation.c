#include<stdio.h>
#include<math.h>

struct Equation{
    float a;
    float b;
    float c;
};

int main(void){
    struct Equation quadratic;

    printf("Enter a : ");
    scanf("%f",&quadratic.a);

    printf("Enter b : ");
    scanf("%f",&quadratic.b);

    printf("Enter c : ");
    scanf("%f",&quadratic.c);

    float discriminant;

    discriminant = (quadratic.b*quadratic.b) - 4*quadratic.a * quadratic.c;

    if(discriminant<0){
        printf("Roots are imaginary and cannot be permuted \n");
        return 0;
    }

    float solution_1, solution_2;
    solution_1 = (-quadratic.b + sqrt(discriminant))/(2*quadratic.a);
    solution_2 = (+quadratic.b +sqrt(discriminant))/(2*quadratic.a);
    
    printf("The two roots are (%f/%f)\n",solution_1,solution_2);
    return 0;
}