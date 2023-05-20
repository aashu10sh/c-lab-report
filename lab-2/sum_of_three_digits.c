#include <stdio.h>
int main(void)
{
      int n,last_digit,first_digit,middle_digit,sum,t1;
      printf("Enter 3-Digit Number: ");
      scanf("%d",&n);
      first_digit=n/100;
      t1=n%100;
      last_digit=t1%10;
      middle_digit=t1/10;
      printf("\nFirst Digit  = %d \nMiddle Digit = %d \nLast Digit   = %d\n",first_digit,middle_digit,last_digit);
      sum=last_digit+middle_digit+first_digit;
      printf("\nSum of All 3-Digits : %d",sum);
      return 0;
}