/*
Name:WAIRIMU JOHN NDUATI
Reg No:PA106/G/29038/25
Description: A PROGRAM TO ENABLE THE USER TO PURCHASE DATA BUNDLES.
*/
#include <stdio.h>
int main(){
    int choice;

	printf("select data bundles\n");
	printf("1. 100MB = 50 KES\n");
	printf("2. 500MB = 200 KES\n");
	printf("3. 1GB   = 350 KES\n");
	printf("4. 2GB   = 600 KES\n");
	
	printf("Enter your choice(1-4):\n");
	scanf("%d", &choice);
	
	if (choice=1)
	{
		printf("Your selected 100MB");
	}
	else if (choice=2)
	{
		printf("Your selected 500MB");
	}	
	else if (choice=3)
	{
		printf("Your selected 1GB");
	}
	else if (choice=4)
	{
		printf("Your selected 2GB");
	}		
	else {
		printf("invalid choice");
	}
return 0;

}
