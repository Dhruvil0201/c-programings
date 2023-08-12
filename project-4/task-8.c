#include <stdio.h>

main() {
    int i, j, n = 49; 

    for (i = 45; i <= n; i++) {
        for (j = 45; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

}