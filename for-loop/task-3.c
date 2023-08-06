#include <stdio.h>

main()
{ 

	int number;

	int n;
	
	printf("Enter the value of N: ");
	scanf("%d",&n);
	
	printf("Numbers from 1 to %d: \n",n);
	
	for(number = 1; number <= n;number++)
	{
		
		printf("%d ",number);
	
	}
	

}
