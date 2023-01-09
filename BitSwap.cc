#include <iostream>
#include <assert.h>

/**
 * given a 64-bit integer and two positions i and j, swap bit in i-th position with
 * the j-th bit.
 * 
 * time complexity: O(1)
*/
long long swap(unsigned long long num, int i, int j) {

    long long response = 0; 

    if( ((num >> i) & 1) != ((num >> j) & 1) ) {

        long mask = (1 << i) | (1 << j); 

        response = num ^ mask;
    }

    return response;
}


int main(void) {

    assert(swap(32, 5, 3) == 8);

    return 0;
}