#include<stdio.h>


int getFactorial(int number);

int main(void){
	int user_number;
	printf("Enter Your Number : ");
	scanf("%d",&user_number);
	int factorial;
	factorial = getFactorial(user_number);

	printf("The factorial is %d\n",factorial);

}

int getFactorial(int number){
	int factorial=1;
	for(int i=1;i<=number;i++){

		factorial = factorial*i;
	}
	return factorial;
}