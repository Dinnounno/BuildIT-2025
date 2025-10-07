#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//tes 
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    long long total = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }

    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    int count = 0;
    int days[n];
    for (int i = 0; i < n; i++) {
        if (arr[i] == max_val) {
            days[count] = i + 1; 
            
            count++;
        }
    }

    double percentage = (double)(max_val * count) / total * 100.0;

    printf("Max : %d\n", max_val);
    printf("Count : %d\n", count);
    printf("days :");
    for (int i = 0; i < count; i++) {
        printf(" %d", days[i]);
    }
    printf("\nPercentage : %.3f%%\n", percentage);

    return 0;
}
