#include <stdio.h>

void myStrCpy(char dest[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0'; // Don't forget the null terminator!
}

int main() {
    char src[] = "Copy this string";
    char dest[50]; // Must be large enough
    
    myStrCpy(dest, src);
    
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    return 0;
}