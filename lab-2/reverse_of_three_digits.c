#include <stdio.h>
int main(void)
{
      int original_number,last_digit,first_digit,middle_digit,t1;
      printf("Enter 3-Digit Number: ");
      scanf("%d",&original_number);

      first_digit=original_number/100;
      
      t1=original_number%100;
      
      last_digit=t1%10;
      
      middle_digit=t1/10;
      
      
      printf("\nFirst Digit  = %d \nMiddle Digit = %d \nLast Digit   = %d\n",first_digit,middle_digit,last_digit);
      printf("\nReverse of  3-Digits : %d%d%d",last_digit,middle_digit,first_digit);
      return 0;
}