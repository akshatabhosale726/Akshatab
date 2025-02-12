#include <stdio.h>

// Function prototype
void swap(int, int);

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After swapping: a = %d, b = %d\n", a, b); // Will values swap?
    
    return 0;
}

// Function definition
void swap(int x, int y) {
  // write the code for swaaping
}

