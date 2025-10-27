#include <stdio.h>

void mergeSorted(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;
    
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            result[k++] = arr1[i++];
        else
            result[k++] = arr2[j++];
    }
    
    // Copy remaining elements of arr1, if any
    while (i < n1) result[k++] = arr1[i++];
    
    // Copy remaining elements of arr2, if any
    while (j < n2) result[k++] = arr2[j++];
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int n1 = 4;
    int arr2[] = {2, 4, 6, 8};
    int n2 = 4;
    int merged[8];
    
    mergeSorted(arr1, n1, arr2, n2, merged);
    
    printf("Merged array: \n");
    for(int i=0; i<n1+n2; i++) printf("%d ", merged[i]);
    printf("\n");
    return 0;
}