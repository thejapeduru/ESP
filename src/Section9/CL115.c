//Get a four-digit number from user and only reverse the
//first two digits of the number, then print the number.
#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter Number : ");
    scanf("%d",&x);
    y = (x/1000) * 1000+((x/100)%10) * 100+((x%10) * 10) + ((x/10)%10);
    printf("Result = %d\n",y);
}