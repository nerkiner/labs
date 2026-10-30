#include <stdio.h>
int main() {
    int a, b, c;

    for (int i = 100; i <= 999; i++) {
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;

        if (a != b && a != c && b != c)
            printf("%d\n", i);
    }

    return 0;
}