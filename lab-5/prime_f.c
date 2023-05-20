#include<stdio.h>

int isPrime(int number);

int main(void){
	int user_number;
	printf("Enter Your Number : " );
	scanf("%d",&user_number);


	if(isPrime(user_number)){
		printf("The given number is a Prime Number \n");
		return 0;
	}
	printf("The given number is Not a prime number \n");
}

int isPrime(int number){
	for(int i =0;i<number;i++){
		if(number%2 == 0){
			return 0;
		}
	}
	return 1;
}