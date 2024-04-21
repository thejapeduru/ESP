//Get a three-digit number from user and print the reverse of the number.
#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter Number : ");
    scanf("%d",&x);
    y = (x % 10) * 100 + ((x / 10)%10) * 10 + x / 100;
    printf("Result = %d",y);
}