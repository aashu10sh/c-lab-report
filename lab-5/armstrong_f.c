#include<stdio.h>

int cubesum(int num);

int main(void){
	int user_number;
	printf("Enter Your Number : ");
	scanf("%d",&user_number);
	if(cubesum(user_number)){
		printf("The given number is armstrong number \n");
		return 0;
	}
	printf("The given number is not a armstrong number \n");
	return 0;

}


int cubesum(int number){
	int rem,reverse = 0;
	int arm_sum = 0;
	int arm_temp = number;
	 while(number!=0)    
  {    
     rem=number%10;    
     reverse=reverse*10+rem;    
     number/=10;
     arm_sum = arm_sum + rem*rem*rem;
  }    
  return arm_sum == arm_temp ? 1 : 0 ;
}