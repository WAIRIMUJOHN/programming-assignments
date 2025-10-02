/* NAME: WAIRIMU JOHN NDUATI
REG NO: PA106/G/29038/25
DESCRIPTION: PROGRAM TO DISPLAY EXAM ELIGIBILITY
*/

#include <stdio.h>

int main() {
    float attendance;
      float marks;
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &marks);

    if (attendance >= 75 && marks >= 40) {
        printf("\nEligible for exams.\n");
    } else {
        printf("\nNot eligible.\n");
    }

    return 0;
}
