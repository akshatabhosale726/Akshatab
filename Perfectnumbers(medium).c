#include <stdio.h>

int isPerfectSquare(int num);

int main() {
    int num = 16;
    if (isPerfectSquare(num))
        printf("Perfect Square\n");
    else
        printf("Not Perfect Square\n");
    return 0;
}

