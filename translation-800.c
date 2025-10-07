#include <stdio.h>
#include <string.h>

#define MAX_SIZE 101

int main () {
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];

    int flag = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == str2[strlen(str2) - i - 1]) {
            flag = 1;
        }
        else {
            printf("NO");
            return 0;
        }
    }

    if (flag) {
        printf("YES");
    }
}

