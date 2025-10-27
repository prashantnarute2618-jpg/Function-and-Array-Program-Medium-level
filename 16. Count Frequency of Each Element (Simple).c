#include <stdio.h>

void findFrequency(int arr[], int size, int freq[]) {
    // Initialize frequency array to 0
    for(int i=0; i<10; i++) freq[i] = 0;
    
    // Count frequencies
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++; // Assumes arr[i] is between 0 and 9
    }
}

int main() {
    int myArr[] = {1, 2, 5, 1, 2, 1, 9, 0, 5};
    int n = 9;
    int freqArr[10]; // To store counts for 0-9
    
    findFrequency(myArr, n, freqArr);
    
    printf("Frequency of each digit (0-9):\n");
    for (int i = 0; i < 10; i++) {
        if(freqArr[i] > 0) {
            printf("Digit %d appears %d time(s)\n", i, freqArr[i]);
        }
    }
    return 0;
}