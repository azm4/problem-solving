#include <stdio.h>

int main () {
    int n;
    scanf ("%d", &n);
    int a[n];
    int b[n];
    int c[n];
    int total = 0;

    for (int i = 0; i < n; i++) {
        scanf ("%d %d", &a[i], &b[i]);
    }
    
    int max = -1;
    for (int i = 0; i < n; i++) {
        total = total - a[i] + b[i];
        c[i] = total;
        if (c[i] > max) {
            max = c[i];
        }
    }

    printf("%d", max);
}
