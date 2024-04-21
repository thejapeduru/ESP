/*
Get a three-digit number from user. If the sum of the digits is less than 10, then print the sum,
 otherwise add the digits of the sum. If the sum of the digits is less than 10, then print the sum, 
 otherwise add the digits of the sum, and print the sum.
Note: The result should be always single digit only.
*/
#include<stdio.h>
int sum(int number);
int main ()
{
    int x,y;
    printf ("Enter Number : ");
    scanf("%d",&x);
    
    y = sum(x);
    while(y >= 10)
    {
        y = sum(y);
    }

    printf ("Result = %d",y);
}

int sum(int number)
{
    int sum = 0;
    
    while(number != 0)
    {
        int temp = number % 10;  
        sum += temp;
        number = number / 10; 
    }
    return sum;
}