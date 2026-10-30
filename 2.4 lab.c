#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;

    printf("Enter a sequence (0 to finish):\n");

    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        if (i % 3 != 0 && n % 3 == 0)
            sum += n;
        i++;
    }

    printf("Sum = %d\n", sum);


    return 0;


}