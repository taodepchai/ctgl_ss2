#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);


    int found = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                printf("(%d, %d)\n", a[i], a[j]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("khong cap so nao co tong bang %d.\n", k);
    }

}
