#include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move pointers
        start++;
        end--;
    }
}

int main() {
    int myArr[] = {1, 2, 3, 4, 5};
    int n = 5;
    
    printf("Original array: ");
    for(int i=0; i<n; i++) printf("%d ", myArr[i]);
    
    reverseArray(myArr, n); // Pass array to be modified
    
    printf("\nReversed array: ");
    for(int i=0; i<n; i++) printf("%d ", myArr[i]);
    printf("\n");
    
    return 0;
}