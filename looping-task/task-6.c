#include <stdio.h>

main()
{
    int i, n=0;
  
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are: \n \n", n);

    
    while(n>=i)
    {
        printf("%d\t",n);

        
        n=n-2;
    }

}