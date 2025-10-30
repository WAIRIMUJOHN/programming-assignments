#include <stdio.h>

int main() {
    int i;
    float revenue[7], total = 0, average;

    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal weekly revenue = %.2f", total);
    printf("\nAverage daily revenue = %.2f\n", average);

    return 0;
}
