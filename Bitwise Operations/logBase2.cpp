#include <iostream>

// Function Declarations
int main();
std::size_t logBase2( unsigned int value );

// Function Definitions
int main() {
    unsigned int n{42};
    std::cout << logBase2( n ) << std::endl;

    return 0;
}

/*
 * @param: unsigned int value - The value where we're looking at
 * 
 * This function returns the highest power for a value. We're not
 * looking for a decimal value but just the closest power to get to the
 * value while not going over.
 */
std::size_t logBase2( unsigned int value ) {
    std::size_t power{31};

    unsigned int mask{1};
    mask <<= 31;

    for ( std::size_t i{0}; i < 32; ++i ) {
        if( value & mask ) {
            break;
        }
        mask >>= 1;
        power -= 1;
    }

    return power;
}