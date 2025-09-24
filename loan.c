/*
Name:WAIRIMU JOHN NDUATI
Reg No:PA106/G/29038/25
Description: program to apply for a loan
*/
#include<stdio.h>

int main(){
	int age,income;
	
	//user input
	printf("Enter your age:");
	scanf("%d", &age);
	printf("Enter your annual income:");
	scanf("%d", &income);
	
	if(age>=21 && income>=21000){
		printf("Congratulations,you qualify for a loan");
	}else{
		printf("Unfortunately,we are unable to offer you a loan at thi time");
	}
	
	
	return 0;
}