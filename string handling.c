// string handling using library functions :
//a. palindrome check for a string : write a program to check if a string is a palindrome or not.
// b. string length calculation using functions : write a program to calculate the length of string using a library function/predefined operators.
// c. string concatenation : write a program to concatenate two string using libary functions.
#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    //Palindrome
    printf("Enter a String:\n");
    scanf("%s",&a);
    char b[100];
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    printf("This is a palindrome string\n");
    else
    printf("This is not a palindrome string\n");
    //Length of string
    printf("%d\n",strlen(b));
    //Concatenate
    printf("%s\n",strcat(b,a));
}