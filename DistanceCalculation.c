#include <stdio.h>
#include <math.h>

int main(void) {
    int x_1;
    int y_1;
    int x_2;
    int y_2;

    double eu_dist;
    double manh_dist;

    printf("Enter x1, y1, x2, y2: ");
    scanf(" %d %d %d %d", &x_1, &y_1, &x_2, &y_2);

    eu_dist = sqrt(pow((float) x_1 - (float) x_2, 2) + pow((float) y_1 - (float) y_2, 2));
    manh_dist = abs(x_1 - x_2) + abs(y_1 - y_2);

    printf("Euclidean distance = %.2f\n", eu_dist);
    printf("Manhattan distance = %.2f", manh_dist);

    return 0;
}