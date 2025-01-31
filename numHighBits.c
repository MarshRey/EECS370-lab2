// EECS 370 SP 23 - Lab 2
// MODIFY AND SUBMIT THIS FILE
#include "numHighBits.h"

// Takes in an integer as an argument, and returns the number of bits set high in its binary representation
int numHighBits(int input){
    int count = 0;
    for(int i = 0; i < 32; i++){
        printf("input = %d\n", input);
        printf("sizeof(input) = %d\n", sizeof(input));

        if(input & 1){ // if the last bit is 1.
            count++;
        }
        input = input >> 1;
    }
    return count;
}
