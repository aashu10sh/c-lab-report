#include<stdio.h>

int getSum(int n);

int main(){

	int user_number;
	printf("Enter Your Number : ");
	scanf("%d",&user_number);


	int sum = getSum(user_number);
	printf("The sum is %d \n",sum);

}

int getSum(int number){
	int sum=0;
	for (int i = 1; i <= number; ++i){
		sum = sum+i;
	}
	return sum;
}