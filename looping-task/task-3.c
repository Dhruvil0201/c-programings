#include <stdio.h>

main()
{ 

	int number = 1;

	int n;
	
	printf("Enter the value of N: ");
	scanf("%d",&n);
	
	printf("Numbers from 1 to %d: \n",n);
	
	while(number <= n)
	{
		
		printf("%d ",number);
	
		number++;
	}
	

}
