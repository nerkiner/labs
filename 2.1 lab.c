#include <stdio.h>
int main() {
    int n, digit, result = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 6;
        result += digit * place;
        place *= 10;
        n /= 6;
    }

    printf("A number in a numeral system with base 6: %d\n", result);

    return 0;


}
