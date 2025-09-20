#include <stdio.h>
#define ARR_SIZE 3
 
int main () {
    int n; 
    scanf("%d", &n);
    int arr[ARR_SIZE];
    int sum = 0, count = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < ARR_SIZE; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        if (sum > 1) {
            count++;
        }
        sum = 0;
    }
 
    printf("%d\n", count);
 
    return 0;
}
