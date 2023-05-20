#include<stdio.h>
// done by ashutosh

int main(void){

	int matrix[2][2] = {
		{1,2},
		{3,4}
	};

	for (int i = 0; i < 2; ++i){
		for (int j = 0; j < 2; ++j){
			printf("%d \t",matrix[j][i]);
			/* code */
		}
		printf("\n");
		/* code */
	}
}