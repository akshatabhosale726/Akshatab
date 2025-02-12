#include <stdio.h>
int main() {
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
       //write output for the condition
    }

    for (i = 2; i < num / 2; i++) {
        if (num % i == 0) {
            flag = _______; // Change flag if divisible
            break;
        }
    }

    if (flag == 0)
       //complete the code
    else
        printf("Not a prime number\n");

    return 0;
}

