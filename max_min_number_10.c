#include <stdio.h>
#define size 10

void main() {
    int max, min, i, numbers[size];

    printf("Enter %d values:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);

        if (i == 0) {
            max = min = numbers[i];
        } else {
            if (numbers[i] > max) {
                max = numbers[i];
            }
            if (numbers[i] < min) {
                min = numbers[i];
            }
        }
    }

    printf("Max number among the array: %d\n", max);
    printf("Min number among the array: %d\n", min);
}

