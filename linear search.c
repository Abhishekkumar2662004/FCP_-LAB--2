// Linear Search in Array: Write a program to implement linear search in a 1-D array. 
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},n;
    printf("Enter the number you want to search");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        if(a[i]==n){
        printf("Number found");
        return 0;
        }
    }
    printf("Number not found");
}