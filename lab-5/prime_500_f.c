#include<stdio.h>

int isPrime(int number);

int main(void){

	for(int i=1;i<=500;i++){

		if(isPrime(i)){
			printf("The given number %d  is a Prime Number \n",i);
		}
	}

}

int isPrime(int number){
	for(int i =0;i<number;i++){
		if(number%2 == 0){
			return 0;
		}
	}
	return 1;
}