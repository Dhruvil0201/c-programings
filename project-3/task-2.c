#include <stdio.h>

main() {
	int i, num;

	printf("Enter number to print table: ");
	scanf("%d", &num);

	for(i=1; i<=10; i++) {
		printf("%d X %d = %d\n", num, i, (num*i));
	}

}