#include<stdio.h>

int isEven(int num);
int main(void){

	int user_number;
	printf("Enter Your Number : " );
	scanf("%d",&user_number);


	if(isEven(user_number)){
		printf("The given number is Even \n");
		return 0;
	}
	printf("The given number is Odd \n");


	return 0;
}

int isEven(int number){
	return number %2 == 0 ? 1 : 0;
}