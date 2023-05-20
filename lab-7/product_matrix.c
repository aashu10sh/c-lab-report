#include<stdio.h>
#define ROWS 2
#define COLS 2

int main(void){
    int matrix1[ROWS][COLS] ={
        {1,2},
        {4,5}
    };
    int matrix2[ROWS][COLS] = {
        {4,5},
        {4,6}
    };
    int solution[ROWS][COLS];
    int j;

    for (int i = 0; i < 2; i++){

        for (int j = 0; j < 2; j++){
            solution[i][j] = matrix1[i][j] * matrix2[i][j];
            
            // printf("%d %d",i,j);
        }
        
    }
    for (int  i = 0; i < ROWS; i++){
        for (int  j = 0; j < COLS; j++)
        {
            printf("%d \t",solution[i][j]);
        }
        printf("\n");
        
    }
    
}
