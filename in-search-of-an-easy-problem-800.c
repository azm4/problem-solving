#include <stdio.h>
#include <stdbool.h>

bool problem (int n) {
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            return false;
        }
    }
    return true;
}

int main () {
    int n;
    scanf("%d", &n);

    if (problem(n)) printf("EASY");
    else printf("HARD");
}
