#include <stdio.h>

int main() {
    int n, found = 0;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    for (int a = 1; a * a < n; a++) {
        for (int b = a; a * a + b * b <= n; b++) {
            if (a * a + b * b == n) {
                printf("%d = %d^2 + %d^2\n", n, a, b);
                found = 1;
            }
        }
    }

    if (!found)
        printf("It is impossible to represent the number\n");

    return 0;
}
