#include <stdio.h>

int main() {
    int hotel[3][5][10];
    int b, f, r, total = 0;

    for(b = 0; b < 3; b++) {
        for(f = 0; f < 5; f++) {
            for(r = 0; r < 10; r++) {
                printf("Branch %d Floor %d Room %d (1=occupied,0=vacant): ", b+1, f+1, r+1);
                scanf("%d", &hotel[b][f][r]);
                if(hotel[b][f][r] == 1)
                    total++;
            }
        }
    }

    printf("\nTotal occupied rooms in all branches = %d\n", total);
    return 0;
}