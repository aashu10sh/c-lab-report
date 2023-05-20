#include<stdio.h>
#define LIMIT 500

void print500(int limit);

int main(void){
	print500(LIMIT);

}

void print500(int limit){
	for (int i = 1; i <= limit; i++){
		printf("%d \n",i);
	}

}