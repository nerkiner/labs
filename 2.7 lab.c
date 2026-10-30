#include <stdio.h>
int main() {
    int n, sum = 0;
    int start = 1;

    printf("Enter number: ");
    scanf("%d", &n);
    start = n * (n - 1) + 1;

    for (int i = 0; i < n; i++) {
        sum += start;
        start += 2;
    }

    printf("Cube of number = %d\n", sum);

    return 0;


}