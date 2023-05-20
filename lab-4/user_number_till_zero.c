#include<stdio.h>

int main(void){
    int zero_sum=0,positive_sum=0,negative_sum=0;
    char want_to_exit;
    do{
        
        int user_number;
        printf("Enter Your Number : ");
        scanf("%d",&user_number);

        if(user_number>0){
            positive_sum++;
            goto Ask;
        }
        if(0>user_number){
            negative_sum++;
            goto Ask;
        }
        zero_sum++;
        
        Ask:
            printf("Would you like to exit? ");
            scanf(" %c",&want_to_exit);


    } while (want_to_exit != 'y');

    printf("Positive Numbers : %d\nNegative Numbers : %d\nZero's : %d\n",positive_sum,negative_sum,zero_sum);
    return 0;
    
}

