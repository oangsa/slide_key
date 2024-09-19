#include<stdio.h>

int main(void) {

    int student_score;
    int sum_score = 0;

    for (int i = 1; i <= 3; i++) {
        printf("Student %d:\n", i);

        for (int j = 1; j <= 5; j++) {
            printf("\tSubject %d: ", j);
            scanf(" %d", &student_score);
            sum_score += student_score;
        }
        
        printf("Total score of student %d is %d.\n", i, sum_score);
        sum_score = 0;
    }

    return 0;
}