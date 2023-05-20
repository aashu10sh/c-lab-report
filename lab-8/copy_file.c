#include <stdio.h>

typedef char name[500];

typedef struct
{
    name original_file;
    name new_file;
} File;


File get_file_data(){
    File user_file;
    printf("Enter Original File Name : ");
    scanf("%s", user_file.original_file);
    printf("Enter New File : ");
    scanf("%s", user_file.new_file);
    return user_file;
}

int main(void){
    File file = get_file_data();
    printf("Coping %s to  %s \n",file.original_file,file.new_file);

    FILE *old_file, *new_file;

    old_file = fopen(file.original_file,"r");
    new_file = fopen(file.new_file,"w");

    if(old_file == NULL || new_file == NULL){
        printf("One of the file is not opening ! ");
        return 127;
    }
    char c = ' ';
    while( c != EOF){
        c = fgetc(old_file);
        fputc(c,new_file);
    }

    fclose(new_file);
    fclose(old_file);
    return 0;

}

// . Write a program using the structure of “Student” having data member’s name
// and marks. Take a input for 5 students and store each records in file “student.txt”
// in a formatted way.
