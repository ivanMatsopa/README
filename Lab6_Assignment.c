/*
Ivan Matsopa
Lab 6
2/23/24
*/

#include <stdio.h>

int search(int numbers[], int low, int high, int value) {
    if (low > high) {
        // Base case: value not found in the array
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (numbers[mid] == value) {
        // Base case: value found at mid index
        return mid;
    } else if (numbers[mid] < value) {
        // Recur on the right half of the array
        return search(numbers, mid + 1, high, value);
    } else {
        // Recur on the left half of the array
        return search(numbers, low, mid - 1, value);
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int low = 0;
    int high = size - 1;
    int value = 9;

    int result = search(numbers, low, high, value);

    if (result != -1) {
        printf("Value %d found at index %d\n", value, result);
    } else {
        printf("Value %d not found in the array\n", value);
    }

    return 0;
}
