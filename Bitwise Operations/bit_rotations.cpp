/*
 * The bit-shift operators loses extra ones that are shifted beyond the size of the type. 
 * A rotation moves those bits to the other side. 
 * 
 * Example:
 *      Value:               00100010101011101001111011110110
 *      Shifted left by 21:	 11011110110000000000000000000000
 *      Shifted right by 11: 00000000000001000101010111010011
 *      Rotated left by 21:	 11011110110000000000000000000000
 *      Rotated right by 11: 11011110110000000000000000000000
 * 
 * Note that for a 32-bit primitive data type, a left-rotation of 5 is 
 * the same as a left-rotation of 37 and a right rotation of 27.
 */

#include <iostream>
#include <cassert>

int main();

// Helper Function
char *displayBinary( unsigned int value);

// Bit Rotations
unsigned int leftRotate( unsigned int value, std::size_t n );
unsigned int rightRotate( unsigned int vlaue, std::size_t n );

/* 
 * @param unsigned int value
 * 
 * Stores the value as a character array of 1s and 0s
 * Goes from MSB on the left to LSB on the right
 * 
 * Returns a dynamically allocated character array containing
 * the binary in character format of the value passed into this
 * funciton.
 */
char *displayBinary( unsigned int value ) {
    char *output{ new char[32]{} };

    unsigned int k{1};
    k <<= 31;

    std::size_t n{0};
    for(; k > 0; k >>= 1 ) {
        if(value & k) {
            output[n] = '1';
        } else {
            output[n] = '0';
        }
        n++;
    }
    return output;
}

/*
 * @param unsigned int value: the value we want to bit rotate
 * @param std::size_t: the amount of times we rotate the value
 * 
 * This takes the value passed in and rotates the bits to the left
 * by a certain amount as indicated by 'n'. Returns the new value.
 */
unsigned int leftRotate( unsigned int value, std::size_t n ) {
    if( value == 0x0U ) {
        return value;
    }

    if( n == 0 ) {
        return value;
    } else {
        while( n > 32 ) {
            n -= 32;
        }
    }

    unsigned int mask{1};
    mask <<= 31;

    for( std::size_t i{0}; i < n; ++i ) {
        unsigned bit{value & mask};
        bit >>= 31;

        value <<= 1;
        value ^= bit;
    }

    return value;
}

/*
 * @param unsigned int value: the value we want to bit rotate
 * @param std::size_t: the amount of times we rotate the value
 * 
 * This takes the value passed in and rotates the bits to the right
 * by a certain amount as indicated by 'n'. Returns the new value.
 */
unsigned int rightRotate( unsigned int value, std::size_t n ) {
    if( value == 0x0 ) {
        return value;
    }

    if( n == 0 ) {
        return value;
    } else {
        while( n > 32 ) {
            n -= 32;
        }
    }

    unsigned int mask{1};

    for( std::size_t i{0}; i < n; ++i ) {
        unsigned bit{value & mask};
        bit <<= 31;

        value >>= 1;
        value ^= bit;
    }
    
    return value;
}