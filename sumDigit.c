#include <stdio.h>

int sumDigit(int num);

int main() {
    int num;

    scanf("%d", &num);

    printf("The Sum of digits of %d = %d", num, sumDigit(num));
}

int sumDigit(int num) {
    if (num > 0) return (num % 10) + sumDigit(num / 10);
    else return 0;
}