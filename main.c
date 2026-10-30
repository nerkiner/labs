#include <stdio.h>
int main() {
    int n, d , sum = 0, v;

    printf("Enter an eight-digit number: ");
    scanf("%d", &n);

    for (int i = 0; i< n; i++) {
        d = n % 10;
        n /= 10;

        printf("Should the digit %d be counted?(1/0):",d );
        scanf("%d", &v);

        sum += v* d;


    }
    printf("Sum = %d\n", sum);

    return 0;


}