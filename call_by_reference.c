 // Call by Reference Using Pointers: Write a program to demonstrate call by reference using pointers in functions.
#include <stdio.h>

int add(int* a, int* b) {
    int sum = *a+*b;
    return sum;
}

int main() {
    int x = 10, y = 20;
    printf("Addition: %d\n",add(&x, &y));
}
