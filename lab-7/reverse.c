#include<stdio.h>

int main(void){
    int normal[] = {1,2,3,4,5,6,7};
    int size_of_normal = sizeof(normal)/sizeof(normal[0]);
    int reversed[size_of_normal];

    for(int i=0;i<sizeof(normal)/sizeof(normal[0]);i++){
        reversed[i] = normal[(size_of_normal - 1)-i];
    }

    for (int  i = 0; i < size_of_normal; i++)
    {
        printf("%d \t",reversed[i]);
    }
    
}


// create a struct named course with name, code, and credit hour as its member, write a program using this structure to read data of 5 courses, display all data of that course who'se credit hour is greater than 1;