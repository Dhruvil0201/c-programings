#include <stdio.h>

main()
{
    int i=2, n;
  
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are: \n \n", n);

    
    while(i<=n)
    {
        printf("%d\t", i);

        
        i += 2;
    }

}