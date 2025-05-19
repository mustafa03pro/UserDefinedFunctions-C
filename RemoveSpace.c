#include <stdio.h>

int main() {
    char ch[100], result[100];
    char *a = ch;
    char *b = result;

    // Read a full line including spaces
    fgets(ch, sizeof(ch), stdin);

    // Remove spaces
    for (; *a != '\0'; a++) {
        if (*a != ' ') {
            *b = *a;
            b++;
        }
    }

    *b = '\0'; // Null-terminate the result string

    printf("%s", result);

    return 0;
}
