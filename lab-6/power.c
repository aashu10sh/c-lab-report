#include<stdio.h>

int getPower(int base,int power);

int main(void){
    int user_base,user_power;
    printf("Enter the base and power : ");
    scanf("%d %d",&user_base,&user_power);

    int power =  getPower(user_base,user_power);

    printf("The Answer is %d ",power);

}
// 

int getPower(int base, int exponent) {
   if(exponent == 0) {
      return 1;
   }
   else if(exponent % 2 == 0) {
      int temp = getPower(base, exponent/2);
      return temp * temp;
   }
   else {
      int temp = getPower(base, exponent/2);
      return base * temp * temp;
   }
}