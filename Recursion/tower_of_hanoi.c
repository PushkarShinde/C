/*
Problem Description:

Setup:
1. There are three pegs (let's call them A, B, and C).
2. A set of n disks of different sizes is stacked on peg A in decreasing order (largest disk at the bottom, smallest on top).

Goal: Move all the disks from peg A (source) to peg C (destination) using peg B (auxiliary).

Rules:
1. Only one disk can be moved at a time.
2. A disk can only be placed on top of a larger disk or on an empty peg.
*/

#include <stdio.h>

// Function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    // Step 1: Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);
    // Step 2: Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);
    // Step 3: Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("The sequence of moves is:\n");
    towerOfHanoi(n, 'A', 'B', 'C'); // Source: A, Auxiliary: B, Destination: C
    return 0;
}