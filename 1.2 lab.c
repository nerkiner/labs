#include <stdio.h>
int main() {
    int n, d, result = 0, place = 1;

    printf("Enter an six-digit number: ");
    scanf("%d", &n);

    for (int i = 0; i < 6; i++) {
        d = n % 10;
        n /= 10;

        result += (d % 2) * place;
        place *= 10;

    }
    printf("Result = %d\n", result);

    return 0;


}