/*2. Write a program to print a given number without its last digit.*/

#include<stdio.h>

int main()
{
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Number without last digit %d",x/10);
    return 0;
}