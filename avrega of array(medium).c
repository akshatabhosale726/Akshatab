#include <stdio.h>

float average_of_array(int arr[], int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("%.2f\n", average_of_array(arr, n));
    return 0;
}

