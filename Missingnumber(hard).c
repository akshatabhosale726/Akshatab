#include <stdio.h>

int findMissingNumber(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 5};
    int n = 5;
    printf("Missing Number: %d\n", findMissingNumber(arr, n));
    return 0;
}

