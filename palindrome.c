#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(char *str) {
    int len = strlen(str);
    int i = 0;
    int j = len - 1;

    while (i < j) {
        // Skip non-alphanumeric characters and convert to lowercase
        while (i < len && !isalnum(str[i]))
            i++;
        while (j >= 0 && !isalnum(str[j]))
            j--;

        // Compare the characters after converting to lowercase
        if (i < j && tolower(str[i]) != tolower(str[j]))
            return false;

        i++;
        j--;
    }

    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
