/*
Get two 3-digit numbers from user. 
Add the one’s and hundred’s digits of both the numbers. 
Print the sum of all the digits of the number whose sum of one’s and hundred’s digits is bigger.
*/
#include<stdio.h>
int sum(int number);
int main ()
{
    int input1,input2,MaxSum;
    printf ("Enter First Number : ");
    scanf("%d",&input1);
    printf ("Enter Second Number : ");
    scanf("%d",&input2);
    
    int i1digit100 = input1/100;
    int i1digit10 = input1%10;
    int i2digit100 = input2/100;
    int i2digit10 = input2%10;

    MaxSum = i1digit100+i1digit10 > i2digit100+i2digit10 ? (input1%10 + (input1/10)%10 + (input1/100)%10) : input2%10 + (input2/10)%10 + (input2/100)%10 ;
    printf ("Result = %d",MaxSum);
}
