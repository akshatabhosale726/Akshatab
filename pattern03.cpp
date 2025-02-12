#include <stdio.h>

void printHollowSquare(_________, _________);

int main() {
    int n;
    printf("Enter size of square: ");
    scanf("%d", &n);
    
    printHollowSquare(n, n);
    return 0;
}

void printHollowSquare(int rows, int cols) {
    for (int i = 1; i <= rows; i++) {
        for (//write for loop condition for cols) {
            if (i == 1 || i == rows ||/*complete the condition*/)
                printf("*");
            else
                printf(_________); // Fill in the blank
        }
        printf("\n");
    }
}

