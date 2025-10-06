#include <stdio.h> 
#include <string.h>

#define MAX_SIZE 101

int main (){
    char str[MAX_SIZE];
    scanf("%s", str);

    for (int i = 0; i < strlen(str)-1; i++) {
        if (i % 2 != 0) {
            for (int j = 0; j < strlen(str)-i-1; j++){
                if (str[j] > str[j+2]) {
                    int temp = str[j];
                    str[j] = str[j+2];
                    str[j+2] = temp;
                }
            }
        }
    }

    printf("%s\n", str);
}
