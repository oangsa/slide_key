#include <stdio.h>

void sortArray(int* arr, int size);

int main() {
    int Arr[99];
    int size = -1;

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

    printf("\nThe Original Array:\n");

    for (int i = 0; i <= size; i++) printf("%d ", *(Arr + i));

    sortArray(Arr, size);

    printf("\n\nThe Sorted Array:\n\n");

    for (int i = 0; i < size; i++) printf("%d ", *(Arr + i));
}

void sortArray(int* arr, int size) {
    // Bubble sort
    int temp;
    for (int i = 0; i <= size; i++) {
        for (int j = 0; j <= size - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j + 1);
                *(arr + j + 1) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}