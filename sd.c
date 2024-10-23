#include <stdio.h>
#include <math.h>

// (x[i] - avg) ^ 2

// N = Size of array

double SD(float* arr, int arrSize, float avg);

float findAvg(double sum, int size);

double getSum(float* arr, int arrSize);

int main() {

    float testArr[5] = {21, 11, 32, 4, 12};

    printf("%.2lf", SD(testArr, 5, findAvg(getSum(testArr, 5), 5)));

    return 0;
}

double SD(float* arr, int arrSize, float avg) {
    double sum = 0;
    int index = -1;
    float newArr[5];

    // sum += pow((*(arr + i) - avg), 2);

    for (int i = 0; i < arrSize; i++) newArr[++index] = pow((*(arr + i) - avg), 2);

    sum = getSum(newArr, 5) / (double) arrSize;

    return sqrt(sum);
}

float findAvg(double sum, int size) {
    return (float) (sum / size);
}

double getSum(float* arr, int arrSize) {
    double sum = 0;
    for (int i = 0; i < arrSize; i++) sum += *(arr+i);
    
    return sum;
}

