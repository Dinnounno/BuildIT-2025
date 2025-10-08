#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int bin;
    scanf("%d", &bin);

     for (int i = 1; i < bin; i++) {
        for (int j = i; j < bin - 1; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int j = 1; j < bin - 1; j++) {
        printf(" ");
    }
    printf("*\n");
    return 0;
}
