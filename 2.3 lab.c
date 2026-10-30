#include <stdio.h>
int main() {
    int n, a, b;
    int up = 1, down = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 10) {
        a = n % 10;
        n /= 10;
        b = n % 10;

        if (b > a)
            up = 0;

        if (b < a)
            down = 0;
    }

    if (up && !down)
        printf("The digits are in ascending order\n");
    else if (down && !up)
        printf("The digits are in descending order\n");
    else if (up && down)
        printf("All digits are the same\n");
    else
        printf("The digits are not ordered in any specific way\n");


    return 0;


}
