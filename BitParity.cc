#include <iostream>
#include <assert.h>
/***
 * Parity: returns 1 if a word has a odd number of 1s. Otherwise, returns 0; 
*/

/**
 * iteratively test each bit.
*/
short simpleParity(unsigned long long mask) {
    short response = 0;
    while (mask) {
        response = response ^ (mask & 1);
        mask = mask >> 1;
    }
    return response;
}


int main(void) {


    assert(simpleParity(11) == 1);
    //std::cout << "Response: " << simpleParity(11) << std::endl;

    return 0;
}