#include <stdio.h>
#include <math.h> // For sqrt() and pow()

float calculateAverage(int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

float calculateStdDev(int arr[], int size) {
    float avg = calculateAverage(arr, size);
    float varianceSum = 0;
    
    // 1. Calculate sum of squared differences from the mean
    for (int i = 0; i < size; i++) {
        varianceSum += pow(arr[i] - avg, 2);
    }
    
    // 2. Calculate variance (average of the sum)
    float variance = varianceSum / size;
    
    // 3. Standard deviation is the square root of variance
    return sqrt(variance);
}

int main() {
    int sensorReadings[] = {10, 20, 30, 40, 50};
    int n = 5;
    printf("Standard Deviation: %.2f\n", calculateStdDev(sensorReadings, n));
    return 0;
}