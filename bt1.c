#include<stdio.h>

int main() {
    printf("Input n: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
            }
    }
    printf("%d", max);

}
