#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1
{
    float amount = 0;
    int cent_amount = 0;
    int quarter_count = 0;
    int dime_count = 0;
    int nickel_count = 0;
    int left = 0;
    int coin_counter = 0;
    
    do 
    {
        printf("Amount owed: ");
        amount = GetFloat();
        if(amount <= 0)
        printf("Number Should be greater then Zero \n:");
    }
    while(amount <= 0);

    cent_amount = (int)round(amount*100);

    quarter_count = cent_amount / QUARTER;
    left = cent_amount % QUARTER;
    
    dime_count = left / DIME;
    left = left % DIME;
    
    nickel_count = left / NICKEL;
    left = left % NICKEL;
    
    coin_counter = quarter_count + dime_count + nickel_count + left;
    
    printf("%d\n", coin_counter);
    
    return 0;
}
