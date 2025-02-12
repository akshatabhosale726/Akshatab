#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, i, j, sum;
    
    for (i = 0; i < 3; i++) {
      
        for (/*write for loop condition here*/) {
            //find sum of the rows
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }
    
    return 0;
}
//note set the sum = 0 at appropriate position to get correct sum
