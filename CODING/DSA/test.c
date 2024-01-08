#include <stdio.h>

int main() {
    int n, i, position;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (0-based index): ");
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Invalid position. Please enter a valid position.\n");
    } else {
    	
        for (i = position; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--; 
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}

