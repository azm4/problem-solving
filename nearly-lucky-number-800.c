#include <stdio.h>

int main () {
    long long int n;
    scanf("%lld", &n);
    int count = 0;
    int flag = 0;

    while (n != 0) {
        int a = n % 10;
        if (a == 4 || a == 7) {
            count++;
        }
        n = n / 10;
    }
    
    while (count != 0) {
        if (count % 10 == 4 || count % 10 == 7) {
            flag = 1;
        }
        else {
            flag = 0;
            printf("NO");
            return 0;
        }
        count /= 10;
    }
    if (flag) {
        printf("YES");
    } else {
        printf("NO");
    }
}
