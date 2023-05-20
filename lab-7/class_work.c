#include<stdio.h>
#include<stdlib.h>
#define NUMBER 5
// create a struct named course with name, code, and credit hour as its member, write a program using this structure to read data of 5 courses, display all data of that course who'se credit hour is greater than 1;

typedef char name[255];

struct Course{
    int credit_hours;
    name course_name;
    int code;
    
};
typedef struct Course course;

int main(void){
    
    course *new_course  = malloc(sizeof(course)*NUMBER);

    for(int i=0;i<NUMBER;i++){
        printf("Name of Course : ");
        scanf("%s",&new_course->course_name);
        printf("Credit Hours : ");
        scanf("%d",&new_course->credit_hours);
        printf("Course Code : ");
        scanf("%d",&new_course->code);
    }

    // if(new_course->credit_hours>5){
    //     printf("Valid Course of Name : %s ",new_course->course_name);
    // }
    return 0;
}