//string reverse without library function: write a program to reverse a string (array of char) without using string library functions.


#include<stdio.h>
int main()
{
    char str[100], rev[100]; int length=0, j;
    printf("Enter a String\n");
    scanf("%s",&str);

    while(str[length]!='\0'){
        length++;
    }
    for(int i=length-1 ,j=0 ;i>=0 ; i--,j++)
    {
        rev[j] = str[i];
    }
    rev[length]='\0';
    
    printf("Reversed String is %s\n",rev);
}