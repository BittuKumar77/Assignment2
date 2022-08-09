/*3. Write a program to swap values of two int variables*/

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    a=a+b;
    a=a-b;
    b=a-b;
    printf("A of %d,B of %d");
    return 0;

}