#include <stdio.h>

main()
{

	int number;
	
	int n;
	
	printf("Enter the value of N: ");
	scanf("%d",&n);

	printf("Odd Numbers from 1 to %d:\n \n",n);


	for(number = 1; number<=n; number= number+2)
	{
			printf("%d  ",number);
		
	}

}
