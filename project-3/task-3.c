#include <stdio.h>

main() {
	int Number, Count;

	printf("\n Please Enter any number\n");
	scanf("%d", &Number);

	for (Count=0; Number > 0; Number=Number/10) {
		Count=Count + 1;
	}

	printf("\n Number of Digits in a Given Number = %d", Count);
}