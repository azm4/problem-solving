#include <stdio.h>

int main () {
    int k; //banana price
    int n; //his dollars
    int w; //number of bananas
    int total = 0;

    scanf("%d %d %d", &k, &n, &w);

    for (int i = 1; i <= w; i++) {
        total += i*k;
    }

    printf("%d", total - n > 0 ? total - n : 0);
}
