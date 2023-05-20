#include<stdio.h>

int main(void){
	int c,d,temp =0;
	printf("Enter value of C and D seperated by a space \n");
	scanf("%d %d",&c,&d);
	printf("C and D before interchaging, %d %d\n",c, d);
	temp = d;
	d = c;
	c = temp;

	printf("The value of C and D is %d %d", c, d);
}