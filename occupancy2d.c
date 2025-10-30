#include <stdio.h>

int main() {
    int rooms[5][10];
    int floor, room, occupied = 0, vacant = 0;

    // enter room data manually (1=occupied, 0=vacant)
    for(floor = 0; floor < 5; floor++) {
        for(room = 0; room < 10; room++) {
            printf("Floor %d Room %d (1=occupied,0=vacant): ", floor+1, room+1);
            scanf("%d", &rooms[floor][room]);
            if(rooms[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
    }

    printf("\nOccupied rooms: %d", occupied);
    printf("\nVacant rooms: %d\n", vacant);

    return 0;
}