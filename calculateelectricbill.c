/*

NAME:WAIRIMU JOHN NDUATI
REG NO:PA106/G/29038/25
DESCRIPTION: C PROGRAM TO CALCULATE ELECTRICITY BILL

*/
#include <stdio.h>
 float calculateElectricBill (int units){
	 float bill;
	 
	 if(units<=100)
	 	bill=units*10;
	 else if(units<=200)
	 	bill=(100*10)+(units-100)*15;
	 else
	 	bill=(100*10)+(100*15)+(units-200)*20;
	 return bill;
	 }
	 int main(){
	 	int units;
	 	printf("Enter units consumed:");
	 	scanf("%d",&units);
	 	
	 	printf("Total Bill=Ksh. %.2f ", calculateElectricBill(units));
	 	return 0;
 }