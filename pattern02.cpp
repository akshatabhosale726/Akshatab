//inverted pyramid
#include <stdio.h>
void printInvertedPyramid(_________);

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
     //call the function and print the pyramid and pass the number of rows
    return 0;
}

void printInvertedPyramid(int n) {
    for (int i = n; i >= 1; i--) {
        for (//write the for loop condition) {
            printf(" ");
        }
        for (int j = 1; j <= (2* i - 1); j++) {
            printf("*");
        }
       //fill something such that pyramid will be created (hint : printf...)
    }
}

