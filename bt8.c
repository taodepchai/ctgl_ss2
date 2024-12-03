#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n - 1];

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;
    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    int missingNumber = expectedSum - actualSum;

    printf("%d", missingNumber);

    return 0;
}
