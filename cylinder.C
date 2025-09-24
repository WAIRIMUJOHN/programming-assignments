/*
Name:WAIRIMU JOHN NDUATI
Reg No:PA106/G/29038/25
Description:C program to calculate volume and surface area of a cylinder
*/
#include<stdio.h>

int main(){
	const float PI=3.1416;
	float radius,height,volume,surfacearea;
	
	//user input
	printf("Enter radius of the cylinder:");
	scanf("%f", &radius);
	
	printf("Enter height of thr cylinder:");
	scanf("%f", &height);
	
	//calculation
	volume= PI*radius*radius*height;
	surfacearea=2*PI*radius*radius+2*PI*radius*height;
	
	//output
	printf("The volume of the cylinder is %f\n", volume);
	printf("The surface area of the cylinder is %f", surfacearea);
	
	return 0;
}