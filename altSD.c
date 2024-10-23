#include <stdio.h>
#include <math.h>

double SD(int* arr, int arrSize, float avg);

float findAvg(int* arr, int arrSize);

int main() {

    int testArr[5] = {21, 11, 32, 4, 12};

    printf("%.2lf", SD(testArr, 5, findAvg(testArr, 5)));

    return 0;
}

double SD(int* arr, int arrSize, float avg) {
    double sum = 0;

    for (int i = 0; i < arrSize; i++) sum += pow((*(arr + i) - avg), 2);

    sum /= arrSize;

    return sqrt(sum);
}

float findAvg(int* arr, int arrSize) {
    int sum = 0;

    for (int i = 0; i < arrSize; i++) sum += *(arr+i);

    return (float) ((float) sum / arrSize);
}