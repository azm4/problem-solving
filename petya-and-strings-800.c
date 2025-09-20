#include <stdio.h>
#include <string.h>
#include <ctype.h>

# define MAX_SIZE 100

int main () {
    char a[MAX_SIZE];
    char b[MAX_SIZE];

    scanf("%s", a);
    scanf("%s", b);

    for (int i = 0; a[i] != '\0'; i++) {
        a[i] = toupper(a[i]);
        b[i] = toupper(b[i]);
    }
    
    if (strcmp(a,b) > 0) {
        printf("1\n");  
    }
    else if (strcmp(a,b) < 0) {
        printf("-1\n");
    } 
    else {
        printf("0\n");  
    }

    return 0;
}
