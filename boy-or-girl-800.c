#include <stdio.h>
#include <string.h>
#define MAX_SIZE 101

int main () {
    char str[MAX_SIZE];
    int count = 0;
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        for (int j = i+1; j < strlen(str); j++){
            if (str[i] == str[j]) {
                count--;
                break;
            }
            
        }
        count++;
    }

    if (count % 2 != 0) {
        printf("IGNORE HIM!\n");
    } else {
        printf("CHAT WITH HER!\n");
    }
}
