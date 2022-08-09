/*5. Write a program to input a three-digit number and display the sum of the digits.*/

#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b+c);
    printf("total of %d",d);
    return 0;
}