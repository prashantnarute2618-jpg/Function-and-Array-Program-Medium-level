#include <stdio.h>

int myStrLen(char str[]) {
    int len = 9;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int main() {
    char greeting[] = "Hello Adi";
    printf("Length of string is: %d\n", myStrLen(greeting));
    return 0;
}