// Recursive Function for Factorial: Write a program to calculate the factorial of a number using recursion.

#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);
}
void main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    printf("%d",fact(n));
}