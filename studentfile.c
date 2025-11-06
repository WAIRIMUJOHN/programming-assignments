/*

NAME:WAIRIMU JOHN NDUATI
REG NO:PA106/G/29038/25
DESCRIPTION:STUDENT INFORMATION FILE

*/

#include <stdio.h>

struct Student {
    char name[50];
    int regNo;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("STUDENT RESULTS\n");
    printf("------------------------------\n");
    printf("Name\t\tRegNo\tMarks\n");
    printf("------------------------------\n");

    
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("%s\t%d\t%.2f\n", s.name, s.regNo, s.marks);
    }

    fclose(fp); 
    return 0;
}