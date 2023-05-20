#include<stdio.h>


int getFactorial(int number);

int main(void){
	for(int i=1;i<=10;i++){
		int factorial;
		factorial = getFactorial(i);
		printf("The factorial is %d\n",factorial);
	}
}

int getFactorial(int number){
	int factorial=1;
	for(int i=1;i<=number;i++){

		factorial = factorial*i;
	}
	return factorial;
}