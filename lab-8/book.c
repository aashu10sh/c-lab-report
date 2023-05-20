#include<stdio.h>
#define AMOUNT 5

struct BookList{
  char title[50];
  int price;
  char author[50];
};

int main(void){
  struct BookList books[AMOUNT];
  for(int i=0;i<AMOUNT;i++){
    printf("Enter Book Title : ");
    scanf("%s",books[i].title);
    printf("Enter Book Price : ");
    scanf("%d",&books[i].price);
    printf("Enter Book Author : ");
    scanf("%s",books[i].author);
  }

  int total_cost;

  for(int i=0;i<AMOUNT;i++){
    total_cost = total_cost + books[i].price;
  }

  printf("The total cost is %d \n",total_cost);
}

