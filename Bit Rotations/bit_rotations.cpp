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

int main();

// Helper Function
void displayBinary( unsigned int value);

// Bit Rotations
unsigned int leftRotate( unsigned int value, std::size_t n );
unsigned int rightRotate( unsigned int vlaue, std::size_t n );

int main() {

    return 0;
}

void displayBinary( unsigned int value ) {

    return;
}

unsigned int leftRotate( unsigned int value, std::size_t n ) {

    return 0;
}

unsigned int rightRotate( unsigned int value, std::size_t n ) {

    return 0;
}