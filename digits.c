#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// Converts a string to lowercase
void toLower(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

// Checks if a string contains only digits
bool isContainsOnlyDigits(char str[]) {
    toLower(str);  // Convert to lowercase (not necessary for digits)
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return false;  // found non-digit character
        }
    }
    return true;  // all characters are digits
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if (isContainsOnlyDigits(str)) {
        printf("The string contains only digits.\n");
    } else {
        printf("The string contains non-digit characters.\n");
    }

    return 0;
}
