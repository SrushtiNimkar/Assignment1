// write a program to convert temperature in celsius to fahrenheit and vice versa. formula for conversion is 
 //°c=x(f-32)
#include <stdio.h>
int main()
{
    float celsius,fahrenheit; 
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    fahrenheit= (celsius*9/5)+32 ; 
    printf("%.2f Celsius = %.2fFahrenheit", celsius, fahrenheit);


    return 0;
}
     