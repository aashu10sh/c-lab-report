#include<stdio.h>

int getReverse(int num);

int checkPalendrome(int real, int reverse);

int main(void){
	int user_number;
	printf("Enter Your Number : ");
	scanf("%d",&user_number);

	int reversed = getReverse(user_number);
	if(checkPalendrome(user_number,reversed)){
		printf("The given number %d is a palendrome \n");
		return 0;
	}
	printf("The given number is not a palendrome");
	return 0;


}

int getReverse(int number){
	int rem,reverse = 0;
	 while(number!=0)    
  {    
     rem=number%10;    
     reverse=reverse*10+rem;    
     number/=10;    
  }    
  return reverse;
}

int checkPalendrome(int real, int reversed){
	return real == reversed ? 1 : 0;
}