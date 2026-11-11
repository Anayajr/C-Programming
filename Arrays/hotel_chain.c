/*
Author: Dunford Anaya
Admin no: BCS-05-0074/2026
Date: 27/10/2026
Description: 3D Array - Multiple Branches Room Occupancy Tracker (Manual Input)
*/

#include <stdio.h>

int main(){
	int i, j, k;
    int chain[3][5][10];
    int total_occupied = 0;

    printf("Enter 1 for Occupied or 0 for Vacant for each room.\n\n");

    for (i = 0; i < 3; i++) {
        printf("Branch %d \n", i + 1);
        
        for (j = 0; j < 5; j++) {
            printf("Floor %d \n", j + 1);
            
            for (k = 0; k < 10; k++) {
                printf("Room %d status (0/1): ", k + 1);
                scanf("%d", &chain[i][j][k]);

                // Count if the room is occupied
                if (chain[i][j][k] == 1) {
                    total_occupied++;
                }
            }
            printf("\n");
        }
    }

    printf("Total Occupied Rooms Across All Branches: %d\n", total_occupied);
    
    return 0;
}
