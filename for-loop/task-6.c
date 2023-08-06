#include <stdio.h>

main() {
    int N , i;

    printf("Enter a positive number N: ");
    scanf("%d", &N);

    printf("Even numbers from %d to 1 are: ", N);

    for (i = N; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    
}
