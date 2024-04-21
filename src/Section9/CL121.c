#include<stdio.h>
int main ()
{
    int x;
    printf("Enter Number : ");
    scanf("%d",&x);
    int a;
    a = x%2;
    int y = x - (a * 5);
    printf("%d",y);
}