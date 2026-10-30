#include <stdio.h>
int main() {
    int a, b, x, y, temp;

    printf("Enter two natural numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("GCD = %d\n", x);
    printf("LCD = %d\n", a / x * b);

    return 0;


}