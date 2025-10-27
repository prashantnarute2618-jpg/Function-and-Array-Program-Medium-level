#include <stdio.h>

// Returns index of key if found, else -1
int binarySearch(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key)
            return mid; // Found it
            
        if (arr[mid] < key)
            low = mid + 1; // Search in right half
        else
            high = mid - 1; // Search in left half
    }
    return -1; // Not found
}

int main() {
    int sortedArr[] = {11, 12, 22, 25, 34, 64, 90};
    int n = 7;
    int key = 22;
    int result = binarySearch(sortedArr, n, key);
    
    if(result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found.\n");
        
    return 0;
}