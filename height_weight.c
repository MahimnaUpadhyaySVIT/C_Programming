#include <stdio.h>
#define size 5

void main() {
    int i, weight[size], height[size], person[size];

    for (i = 0; i < size; i++) {
        printf("Enter person id: ");
        scanf("%d", &person[i]);

        printf("Enter weight and height: ");
        scanf("%d%d", &weight[i], &height[i]);
    }

    for (i = 0; i < size; i++) {
        if (weight[i] >= 60 && height[i] >= 175) {
            printf("\nPerson %d has weight %d and height %d\n", person[i], weight[i], height[i]);
        }
    }
}

