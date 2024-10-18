#include <stdio.h>

void printHistrogram(int* arr, int size);

int max(int* arr, int size);

int main() {
    int size = -1;
    int Arr[999];

    while (1) {
        scanf("%d", (Arr + ++size));
        if (*(Arr + size) == -1) {
            --size;
            break;
        }
    }

    if (size < 0) {
        printf("The array is empty.");
        return 1;
    }

    printHistrogram(Arr, size);
}

void printHistrogram(int* arr, int size) {
    int max_val = max(arr, size);

    for (int i = 0; i <= max_val; i++) {
        printf("[%d] ", i);
        for (int j = 0; j <= size; j++) {
            if (*(arr + j) == i) printf("*");
        }
        printf("\n");
    }

}

int max(int* arr, int size) {
    int max = 0;

    for (int i = 0; i <= size; i++) {
        if (max < *(arr + i)) max = *(arr + i);
    }

    return max;
}