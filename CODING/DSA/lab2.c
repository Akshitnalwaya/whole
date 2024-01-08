#include <stdio.h>

int main() {
    int array[100];
    int size, position, value;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to insert: ");
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position. Position should be between 0 and %d.\n", size);
    } else {
        printf("Enter the value to insert: ");
        scanf("%d", &value);

        for (int i = size; i > position; i--) {
            array[i] = array[i - 1];
        }

        array[position] = value;
        size++;

        printf("Updated array:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}

