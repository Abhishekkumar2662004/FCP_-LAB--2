//  Swap Two Numbers Using Pointers: Write a program to swap values of two variables

// using pointers. 

#include<stdio.h>

int main()
{
    int a=10, b=20; 
    int *p1=&a, *p2=&b;
    int t=*p1;
    *p1 = *p2;
    *p2 = t;
    printf("Value of a : %d\n", a);
    printf("Value of b : %d\n", b);
    return 0;
}