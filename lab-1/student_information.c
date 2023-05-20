#include<stdio.h>

int main(void){
  int age;
  char gender;
  char name[20];
  
  printf("Please Enter Your Age : ");
  scanf("%d", &age);
  printf("Please Enter Your Gender : ");
  scanf(" %c", &gender);
  printf("Please Enter Your Name : ");
  scanf("%s",&name);

  printf("%s is Your Name\nYou are %d years old and\nYou are a %c\n", name, age, gender);
  return 0;
}
