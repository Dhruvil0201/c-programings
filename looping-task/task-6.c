#include <stdio.h>

main()
{
    int i, n=0;
  
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from %d to 1 are: \n \n", n);

    
    while(n>=i)
    {
        printf("%d\t",n);

        
        n=n-2;
    }

}
