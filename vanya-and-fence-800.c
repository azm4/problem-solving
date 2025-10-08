#include <stdio.h>


int main () {
    int h; // fence height
    int n; // number of friends
    int count = 0;

    scanf ("%d %d", &n, &h);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > h) {
            count += 2;
        }
        else count++;
    }

    printf("%d", count);
}
