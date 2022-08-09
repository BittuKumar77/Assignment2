/*7. Write a program to find the position of first 1 in LSB.*/

#include<stdio.h>

int main()
{
    int x=6,count=0;
    int result=0;
    printf("Enter no:");
    scanf("%d",x);
    result = x & 1;
    count++;
    if (result == 1)
    {
        printf("%d",count);
    }
    
}