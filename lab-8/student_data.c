#include <stdio.h>
#define NUMBER 5
typedef char name[100];

struct Student{
    name name_student;
    float marks;
};
typedef struct Student student;

int writeMarksToFile(student students[], FILE *file_to_write);

int main(){
    student students[NUMBER];
    for(int i=0;i<NUMBER;i++){
        printf("Enter Name : ");
        scanf("%s",students[i].name_student);
        printf("Enter Marks : ",students[i].name_student);
        scanf("%f",&students[i].marks);
    }
    FILE *student_data_file;
    student_data_file = fopen("student_data.dat","w");
    if (!writeMarksToFile(students,student_data_file)){
        printf("Error Writing Data to the file !");
        fclose(student_data_file);
        return -1;
    };
    fclose(student_data_file);
    return 0;
}

int writeMarksToFile(student students[],FILE *dat_file){
    for(int i=0;i<NUMBER;i++){
        fprintf(dat_file,"%s : %f\n",students[i].name_student,students[i].marks);
    }
}

