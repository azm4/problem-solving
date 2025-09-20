#include <stdio.h>
#include <string.h>
#define MAX_SIZE 105
#define MAX_WORDS 105
 
#include <stdio.h>
 
int main () {
    int n;
    scanf("%d", &n);
    
    char str[MAX_WORDS][MAX_SIZE];
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < n; i++) {
        int len = strlen(str[i]);
        if (len > 10) printf("%c%d%c\n", str[i][0], len-2, str[i][len-1]);
        else printf("%s\n", str[i]);
    }
    return 0;
}
