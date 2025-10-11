#include <stdio.h>

int main () {
    int n, count = 0;
    scanf ("%d", &n);
    
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int j = 0;
    for (int i = 0; i < n; i++) {
        if(a[i] != a[j]) {
            count++;
            j = i;
        }
    }

    printf("%d", count + 1);
}
