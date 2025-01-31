// EECS 370 SP 23 - Lab 2
// YOU MAY MODIFY THIS FILE BUT DON'T SUBMIT

#include <stdio.h>
#include <stdlib.h>
#include "numHighBits.h"

int numHighBits(int input){
    int count = 0;
    for(int i = 0; i < 32; i++){

        if(input & 1){ // if the last bit is 1.
            count++;
        }
        input = input >> 1;
    }
    return count;
}

int instructorTest() {
    return numHighBits(24) == 2;
}
int main() {
    if (numHighBits(24) != 2) {
        printf("Test failed :(\n");
        exit(1);
    }
    printf("Passed! :)\n");

    if (numHighBits(12) != 2) {
        printf("Test failed :(\n");
        exit(1);
    }
    printf("Passed! :)\n");

    if (numHighBits(0) != 0) {
        printf("Test failed :(\n");
        exit(1);
    }
    printf("Passed! :)\n");

    if (numHighBits(137) != 3) {
        printf("Test failed :(\n");
        exit(1);
    }
    printf("Passed! :)\n");
}