//Get a number from user and subtract 5 from that number if the number’s ten’s position digit is odd,
// then print the result. Do not use “if”.
#include<stdio.h>
int main ()
{
    int x;
    printf("Enter Number : ");
    scanf("%d",&x);
    int  a;
    a = ((x/10)%10) % 2;
    int y = x -(a*5);
    printf ("Result = %d",y);
}