#include <stdio.h>

int main() {
    double x, y, max;

    printf("Enter two digit: ");
    scanf("%lf %lf", &x, &y);

    max = (x + y + (x - y) * ((x > y) - (x < y))) / 2;

    printf("Max = %.2lf\n", max);

    return 0;
}