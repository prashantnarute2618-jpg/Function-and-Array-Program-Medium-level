#include <stdio.h>

int recursiveSum(int arr[], int size) {
    // Base case: if size is 0, sum is 0
    if (size <= 0) {
        return 0;
    }
    // Recursive step: last element + sum of the rest
    return arr[size - 1] + recursiveSum(arr, size - 1);
}

int main() {
    int myArr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("Recursive sum is: %d\n", recursiveSum(myArr, n));
    return 0;
}