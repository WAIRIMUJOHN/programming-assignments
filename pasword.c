/*
NAME: WAIRIMU JOHN NDUATI
REG NO: PA106/G/29038/25
DESCRIPTION: PROGRAM TO PROMPT PASSWORD
*/

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password != 1234);

    printf("Access Granted\n");
    return 0;
}
