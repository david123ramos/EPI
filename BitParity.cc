#include <iostream>
#include <assert.h>
/***
 * Parity: returns 1 if a word has a odd number of 1s. Otherwise, returns 0; 
*/

/**
 * iteratively test each bit.
 * 
 * time complexity O(n)
*/
short simpleParity(unsigned long long mask) {
    short response = 0;
    while (mask) {
        response = response ^ (mask & 1);
        mask = mask >> 1;
    }
    return response;
}

/**
 * this approach uses a trick to remove the last set of 1 bit and this implies
 * to most efficient executions given that we don't need to shift right in every
 *  bit to test if its a '1'.
 * 
 * time complexity O(k) where k is the number of 1s in bit word.
*/
short betterParity(unsigned long long mask) {
    short resp = 0;

    while (mask) {
        resp = resp ^ 1;
        mask = mask & (mask -1); // trick
    }
    
    return resp;
}



int main(void) {


    assert(simpleParity(11) == 1);
    assert(betterParity(11) == 1);

    return 0;
}