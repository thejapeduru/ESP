//Get a four-digit number from user and only reverse the
//last two digits of the number, then print the number.
#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter Number : ");
    scanf("%d",&x);
    y= ((x/100)%10) * 1000+((x/1000)) * 100+((x/10)%10) * 10 + x%10;
    printf("Result = %d\n",y);
}