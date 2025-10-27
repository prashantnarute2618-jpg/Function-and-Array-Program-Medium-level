#include <stdio.h>

int deleteElement(int arr[], int size, int pos) {
    if (size <= 0) {
        printf("Array is empty.\n");
        return 0;
    }
    if (pos < 0 || pos >= size) {
        printf("Invalid position.\n");
        return size;
    }

    // Shift elements to the left
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    return size - 1; // Return new size
}

int main() {
    int myArr[] = {10, 20, 25, 30, 40, 50};
    int n = 6;
    
    n = deleteElement(myArr, n, 3); // Delete element at index 3 (which is 30)
    
    printf("Array after deletion: \n");
    for (int i = 0; i < n; i++) printf("%d ", myArr[i]);
    printf("\n");
    return 0;
}