#include <stdio.h>
#include <ctype.h> // For tolower()

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) { // Loop until null terminator
        char ch = tolower(str[i]); // Convert to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char text[] = "Hello World, this is a test.";
    printf("Number of vowels: %d\n", countVowels(text));
    return 0;
}