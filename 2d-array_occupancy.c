/*
Name:joseph kariiuki gichuhi
Reg:CT100/G/26129/25
Description:2d array
*/
#include <stdio.h> 
int main ()	{
    // 2D array: 5 floors, 10 rooms
    // 0 = vacant, 1 = occupied
    int rooms[5][10] = {
        {1, 0, 1, 1, 0, 1, 0, 0, 1, 1},  // Floor 1
        {0, 0, 1, 1, 1, 0, 0, 1, 0, 1},  // Floor 2
        {1, 1, 1, 0, 0, 1, 1, 0, 1, 0},  // Floor 3
        {0, 1, 0, 0, 1, 1, 1, 1, 0, 0},  // Floor 4
        {1, 1, 0, 1, 1, 0, 1, 0, 1, 1}   // Floor 5
    };

    int floor, room;
    
    printf("Room Occupancy (0 = vacant, 1 = occupied)\n");
    printf("----------------------------------------\n");

    for (floor = 0; floor < 5; floor++) {
        int occupied = 0, vacant = 0;

        for (room = 0; room < 10; room++) {
            if (rooms[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d: %d occupied, %d vacant\n", 
               floor + 1, occupied, vacant);
    }

    return 0;
}	
	
