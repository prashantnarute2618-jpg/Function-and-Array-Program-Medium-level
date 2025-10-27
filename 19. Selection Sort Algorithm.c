#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

int main() {
    int myArr[] = {64, 25, 12, 22, 11};
    int n = 5;
    selectionSort(myArr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) printf("%d ", myArr[i]);
    printf("\n");
    return 0;
}