#include<stdio.h>

int main(void) {

    const int ANSWER = 68;

    int input;

    printf("Guess a number from 0-100: ");
    scanf(" %d", &input);

    if(input > ANSWER) {
        printf("%d is MORE than the right number!", input);

    } else if (input < ANSWER) {
        printf("%d is LESS than the right number!", input);
        
    } else {
        printf("Yes! The right number is %d.", input);
    }

    return 0;
}