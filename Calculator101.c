#include<stdio.h>

int main(void) {

    float a;
    float b;
    char op;

    float answer;

    while (1) {
        printf("Enter x op y (+ - * / %%): ");
        scanf(" %f %c %f", &a, &op, &b);

        if (a == 0 && b == 0) {
            printf("Bye!");
            return 0;
        }

        switch (op)
        {
        case '+':
            answer = a + b;
            printf("%.2f %c %.2f = %.2f\n", a, op, b, answer);

            break;
        case '-':
            answer = a - b;
            printf("%.2f %c %.2f = %.2f\n", a, op, b, answer);

            break;
        case '*':
            answer = a * b;
            printf("%.2f %c %.2f = %.2f\n", a, op, b, answer);

            break;
        case '/':
            answer = a / b;
            printf("%.2f %c %.2f = %.2f\n", a, op, b, answer);

            break;
        case '%':
            answer = (int) a % (int) b;
            printf("%.2f %c %.2f = %.2f\n", (float) a, op, (float) b, (float) answer);

            break;
        
        default:
            printf("Wrong op.\n");

            break;
        }
    }

    return 0;

}