/*
NAME:WAIRIMU JOHN NDUATI
REG NO:PA106/G/29038/25
DESCRIPTION: ATM WITHDRAWAL PROGRAM
*/

#include <stdio.h>

int main() {
    int balance = 1000;
    int withdraw;

    printf("ATM Withdrawal Program\n");

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);
        balance = balance - withdraw;
        printf("Balance = %d\n", balance);
    }

    printf("No more money!\n");
    return 0;
}
