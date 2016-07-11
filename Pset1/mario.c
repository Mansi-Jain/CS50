#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int i,j,k;
    int n=0;

    do
    {
        printf("Height:");
        n=GetInt();
    } while (n<0 || n>23);

    if(n>=0 && n<=23)
    {
     for(i=1;i<=n;i++)
     {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
    
        for(k=1;k<=i+1;k++)
        {
            printf("#");
        }
        printf("\n");
     }
    }
}