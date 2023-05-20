#include<stdio.h>

int main(void){
	int temp_in_fahrenheit;
	printf("Please enter the temperature in fahrenheit: ");
	scanf("%d",&temp_in_fahrenheit);
	int temp_in_centigrade;
	temp_in_centigrade = (temp_in_fahrenheit - 32)*5/9;
	printf("The Temp in Centigrade is : %d",temp_in_centigrade);
	return 0;
}