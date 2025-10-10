#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define size 100

int main () {
    int n, t;
    scanf("%d %d", &n, &t);

    char s[n];

    scanf("%s", s);
    
    bool x[size] = {0};

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G' && x[j] == false) {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                x[j] = true;
                x[j + 1] = true;
            }
        }
        memset(x, 0, sizeof(x));
    }

    printf("%s", s);
}
