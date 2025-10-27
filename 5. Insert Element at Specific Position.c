#include <stdio.h>

// Note: Array must have space. 'size' is current number of elements.
int insertElement(int arr[], int size, int capacity, int key, int pos) {
    if (size >= capacity) {
        printf("Array is full. Cannot insert.\n");
        return size;
    }
    if (pos < 0 || pos > size) {
        printf("Invalid position.\n");
        return size;
    }

    // Shift elements to the right
    for (int i = size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    
    arr[pos] = key;
    return size + 1; // Return new size
}

int main() {
    int myArr[20] = {10, 20, 30, 40, 50}; // Capacity 20
    int n = 5; // Current size
    
    n = insertElement(myArr, n, 20, 25, 2); // Insert 25 at index 2
    
    printf("Array after insertion: \n");
    for (int i = 0; i < n; i++) printf("%d ", myArr[i]);
    printf("\n");
    return 0;
}