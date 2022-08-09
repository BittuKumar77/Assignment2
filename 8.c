/*8. Write a program to check whether the given number is even or odd using a bitwise operator.*/

#include<stdio.h>

int main()
{
    int x = 8;
    int result = x & 1;
    if(result==1)
        printf("odd");
    else
        printf("even");

    return 0;
}