#include <stdio.h>
 
int main() {
    int x = 0, n;
    char statement[4];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {  
        scanf("%s", statement);
        
        if (statement[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    
    printf("%d\n", x);
    return 0;
}
