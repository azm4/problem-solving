#include <stdio.h>
#include <stdbool.h>

bool digits (int y) {
    int digits[10] = {0};
    while (y > 0) {
        int d = y % 10;
        if (digits[d]) return false;
        digits[d] = 1;
        y /= 10;
    }
    return true;
}

int main () {
    int y;
    scanf("%d", &y);

    y++;
    while (!digits(y)) {
        y++;
    }

    printf("%d", y);
}


