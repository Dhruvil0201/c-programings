
#include <stdio.h>

 main(){
 	
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    //convert temperature form dedree celsius to fahrenheit 
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);

}