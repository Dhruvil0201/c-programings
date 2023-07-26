#include<stdio.h>

int main()
{
	
   int a,b, small;

   printf("Enter a number \n");
   scanf("%d",&a);
   
    printf("Enter b number \n");
   scanf("%d",&b);

  // Small among a and b
    if(a<b)
      {
          small = a;
      }
    else
      {
          small = b;
      }

    printf("%d is smallest number",small);

}