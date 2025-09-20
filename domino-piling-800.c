#include <stdio.h>
 
#define DOMINO (2*1)
 
int main () {
    int m, n;
    scanf ("%d %d", &m, &n);
    
    int result = (m*n) / DOMINO;
    printf("%d\n", result);
    return 0;
}
