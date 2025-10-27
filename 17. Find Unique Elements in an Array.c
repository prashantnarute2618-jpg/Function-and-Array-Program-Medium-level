#include <stdio.h>

void printUnique(int arr[], int size) {
    printf("Unique elements: ");
    for (int i = 0; i < size; i++) {
        int isUnique = 1; // Assume it's unique
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // Found a duplicate
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int myArr[] = {10, 20, 10, 30, 40, 20, 50};
    int n = 7;
    printUnique(myArr, n);
    return 0;
}