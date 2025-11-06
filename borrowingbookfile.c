/*

NAME:WAIRIMU JOHN NDUATI
REG NO:PA106/G/29038/25
DESCRIPTION: BORROWING BOOK FILE
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char title[100];

    
    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    gets(title);  


    fprintf(fp, "%s\n", title);

    printf("Book title successfully stored in borrowed_books.txt\n");

    fclose(fp);
    return 0;
}