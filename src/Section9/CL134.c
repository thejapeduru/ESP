//Get two 3-digit numbers from user.
//Print the difference between the one’s digit and hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s digit

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int x1,x2,y;
    printf ("Enter First Number : ");
    scanf("%d",&x1);
    printf ("Enter Second Number : ");
    scanf("%d",&x2);
    
    int x1digit10 = (x1/10)%10;
    int x2digit10 = (x2/10)%10;
    int x1digit1 = x1%10;
    int x2digit1 = x2%10;

    y = x1digit10 > x2digit10 ? abs(x1digit1 - (x1/100)) : abs(x2digit1 - (x2/100)) ;
    printf ("Result = %d",y);
}