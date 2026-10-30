#include <stdio.h>

int main() {
    int n, ab, cd;

    printf("Enter four-digit numbers: ");
    scanf("%d", &n);

    ab = n / 100;
    cd = n % 100;

    printf("Sum = %d\n", ab + cd);


    return 0;


}

