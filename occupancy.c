#include <stdio.h>

int main() {
    int occupancy[5][10];
    int occupied, vacant;

    for (int i = 0; i < 5; i++) {
        printf("Enter occupancy for Floor %d (1=Occupied, 0=Vacant):\n", i + 1);

        for (int j = 0; j < 10; j++) {
            scanf("%d", &occupancy[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (int j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               i + 1, occupied, vacant);
    }

    return 0;
}