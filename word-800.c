#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 101

int main () {
    int low = 0, up = 0;
    char str[MAX_SIZE];
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (islower(str[i])) {
            low++;
        }
        else {
            up++;
        }
    }

    if (low >= up) {
        for (int i = 0; str[i] != '\0'; i++) {
            putchar(tolower(str[i]));
        }
    }
    else {
        for (int i = 0; str[i] != '\0'; i++) {
            putchar(toupper(str[i]));
        }
    }
}

