#include <stdio.h>

int main() {
       int A, B, C;
       int notA, notB, and1, or1, result;

       printf("A\tB\tC\t!A\t!B\t!B&C\t!A|(!B&C)\tResult\n");

       for (A = 0; A <= 1; A++) {
              for (B = 0; B <= 1; B++) {
                     for (C = 0; C <= 1; C++) {
                            notA = !A;
                            notB = !B;
                            and1 = notB && C;
                            or1 = notA || and1;
                            result = (or1 == A);

                            printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t\t%d\n",
                                   A, B, C, notA, notB, and1, or1, result);
                     }
              }
       }

       return 0;


}