#include <stdio.h>

int main(void) {

    float x;
    float total = 0;
    float i = 1;

    printf("Enter x: ");
    scanf(" %f", &x);

    while (x > total) {
        total = total + (1.00 / i);
        printf("Round %d: sum = %.5f\n", (int) i, total);
        i++;
    }

    return 0;
}