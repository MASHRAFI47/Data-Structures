#include <stdio.h>
#include <limits.h>

int main() {
    int arr[10];

    int sum = 0;

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    for(int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }

        if(arr[i] < min) {
            min = arr[i];
        }
    }

    int avg = sum / 10;

    printf("\n");
    printf("%d %d", sum, avg);
    printf("\n");
    printf("%d %d", min, max);
}