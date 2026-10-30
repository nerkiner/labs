#include <stdio.h>

int main() {
    int n, m;
    int a, b, c, x, y, z;

    printf("Enter two three-digit numbers: ");
    scanf("%d %d", &n, &m);

    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;

    x = m / 100;
    y = m / 10 % 10;
    z = m % 10;

    printf("%d\n", a + z);
    printf("%d\n", b + x);
    printf("%d\n", c + y);

    return 0;


}