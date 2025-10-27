#include <stdio.h>

void myStrCat(char dest[], char source[]) {
    int i = 0; // Index for dest
    int j = 0; // Index for source
    
    // 1. Find the end of the destination string
    while (dest[i] != '\0') {
        i++;
    }
    
    // 2. Copy source string to the end of dest
    while (source[j] != '\0') {
        dest[i] = source[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Add new null terminator
}

int main() {
    char str1[100] = "Hello, "; // Must have space
    char str2[] = "Adi!";
    
    myStrCat(str1, str2);
    
    printf("Concatenated string: %s\n", str1);
    return 0;
}