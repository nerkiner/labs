#include <stdio.h>
int main() {
    int n, m = 0, i = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    while (m <= n) {
        i++;
        m += i;
    }

    printf("Digit: %d\n", m);
    printf("Number: %d\n", i);

    return 0;


}