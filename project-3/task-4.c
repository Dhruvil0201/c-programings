#include <stdio.h>
main()
{
    int num, sum=0, fD, lD;

    printf("Enter any digit of Number: ");
    scanf("%d", &num);
    
    lD = num % 10;
    
    fD = num;

   
    while(num >= 10)
    {
        num = num / 10;
    }
    fD = num;

    sum = fD + lD; 

    printf("Sum of first and last digit = %d", sum);

}