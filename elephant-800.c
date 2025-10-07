#include <stdio.h>

int main () {
    int n, count = 0;
    scanf("%d", &n);

    do {
        if (n >= 5) {
            count++;
            n -= 5;
        }
        else if (n >= 4) {\
            count++;
            n -= 4;
        }
        else if (n >= 3) {
            count++;
            n -= 3;
        }
        else if (n >= 2) {
            count++;
            n -= 2;
        }
        else if (n >= 1){
            count++;
            n--;
            
        }
    } while (n != 0);
    
    printf("%d", count);
}
