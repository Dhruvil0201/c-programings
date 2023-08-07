#include <stdio.h>
main()
{
    int num, sum=0, fD, lD;

    printf("Enter any number to find sum of first and last digit: ");
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