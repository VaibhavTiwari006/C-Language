#include <stdio.h>

int main() {
    int a[5], b[5], sum[5];

    printf("Enter 5 elements of first array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 5 elements of second array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 5; i++) {
        sum[i] = a[i] + b[i];
    }

    printf("Sum array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}