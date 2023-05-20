#include<stdio.h>

int main(void){
	int n;
	printf("Enter the value of N: ");
	scanf("%d",&n);
	
	int first_buffer=0,second_buffer=1,show=0;
	// printf("%d\t%d",first_buffer,second_buffer);
	for (int i = 0; i < n; ++i)
	{
		show = first_buffer + second_buffer;
		first_buffer= second_buffer;
		second_buffer = show;

		printf("%d\n",show);
	}
}