#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 char panjangstring[1000];
    char jumpankata[100][100];
    int jumlahKata = 0;

    fgets(panjangstring, sizeof(panjangstring), stdin);
     panjangstring[strcspn(panjangstring, "\n")] = '\0';
    
    char *token = strtok(panjangstring, " ");
    while (token != NULL) {
        int duplikat = 0;

        for (int i = 0; i < jumlahKata; i++) {
            if (strcmp(jumpankata[i], token) == 0) {
                duplikat = 1;
                break;
            }
        }

        if (!duplikat) {
            strcpy(jumpankata[jumlahKata], token);
            jumlahKata++;
        }

        token = strtok(NULL, " ");
    }

    for (int i = 0; i < jumlahKata; i++) {
        printf("%s", jumpankata[i]);
        if (i < jumlahKata - 1)
            printf(" ");
    }
    printf("\n");

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
