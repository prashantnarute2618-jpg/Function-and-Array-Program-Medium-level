#include <stdio.h>
#include <string.h>

// Returns 1 (true) if palindrome, 0 (false) if not
int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    
    while (right > left) {
        if (str[left] != str[right]) {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

int main() {
    char myStr1[] = "madam";
    char myStr2[] = "hello";
    
    if (isPalindrome(myStr1)) printf("%s is a palindrome.\n", myStr1);
    else printf("%s is not a palindrome.\n", myStr1);
    
    if (isPalindrome(myStr2)) printf("%s is a palindrome.\n", myStr2);
    else printf("%s is not a palindrome.\n", myStr2);
    
    return 0;
}