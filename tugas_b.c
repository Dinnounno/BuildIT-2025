#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Daun pohon: dari baris 1 sampai n-1
    for (int i = 1; i < n; i++) {
        // Spasi di kiri: cukup (n - 1 - i)
        for (int j = 1; j <= n - 1 - i; j++) {
            printf(" ");
        }

        // Bintang: 2*i - 1
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    // Batang pohon (baris ke-n)
    for (int j = 1; j <= n - 2; j++) {
        printf(" ");
    }
    printf("*\n");
return 0;
}