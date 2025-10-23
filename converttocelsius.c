/*


*/
#include <stdio.h>
float convertToCelcius(float fahrenheit) {
	return (fahrenheit-32)*5/9;
} 
 int main (){
	 float f;
	 printf("Enter temperature in Fahrenheit: ");
	 scanf("%f", &f);
	 printf("Temperature in celcius=%.2f", convertToCelcius(f));
	 return 0;
 }