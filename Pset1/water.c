#include<cs50.h>
#include<stdio.h>
int main(void)
{
    printf("minutes: ");
    int min = GetInt();
    int bottles;
    bottles = (min*1.5*128)/16;
    printf("bottles: %i \n",bottles);
}