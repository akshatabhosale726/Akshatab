#include <stdio.h>

int power(int x, int y);

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    printf("%d\n", power(x, y));
    return 0;
}

