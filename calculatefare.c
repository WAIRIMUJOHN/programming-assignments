/*

NAME: WAIRIMU JOHN NDUATI 
REG NO: PA106/G/29038/25
DESCRIPTION: A C PROGRAM TO CALCULATE FARE

*/
#include <stdio.h>

float calculateFare(float distance){
	return distance*50;
}

int main(){
	float distance;
	printf("Enter distsnce traveled(km): ");
	scanf("%f", &distance);
	
	printf("Total Fare=ksh. %.2f", calculateFare(distance));
	return 0;
}