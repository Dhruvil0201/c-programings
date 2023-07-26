#include <stdio.h>
main() {
  int a=30, b=50;
  printf("before swaping a=%d , b=%d " ,a,b);



  // 50-30=20
  a = a - b;   

  // 20+30=50
  b = a + b;

  // 50-20=30
  a = b - a;
  
  printf("\n After swapping, a = %d\n", a);
  printf("After swapping, b = %d", b);

}
