#include<stdio.h>

int main(void){
    int odd_sum=0,even_sum=0;
    for(int i=1;i<=100;i++){
        if(i%2 == 0){
            even_sum += i;
            continue;
        }
        odd_sum+=i;

    }
    printf("%d Odd\n%d Even\n",odd_sum,even_sum);
}