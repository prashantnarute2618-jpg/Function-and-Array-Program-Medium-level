#include <stdio.h>
#include <limits.h> // For INT_MIN

int findSecondLargest(int arr[], int size) {
    int max1 = INT_MIN; // Largest
    int max2 = INT_MIN; // Second largest
    
    if (size < 2) return -1; // Not possible

    for (int i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max2 = max1; // Old max1 becomes max2
            max1 = arr[i]; // New max1
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i]; // New max2
        }
    }
    return max2;
}

int main() {
    int myArr[] = {12, 35, 1, 10, 34, 1, 35};
    int n = 7;
    printf("Second largest is: %d\n", findSecondLargest(myArr, n));
    return 0;
}