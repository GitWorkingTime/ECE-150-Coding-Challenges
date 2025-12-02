#include <iostream>

int main();
unsigned short clear_bits( unsigned short num,
                           unsigned short begin,
                           unsigned short end);
char *displayBinary( unsigned short value );

int main() {   
    unsigned short num{637};
    unsigned short begin{2};
    unsigned short end{9};
    unsigned short result{0};

    result = clear_bits( num, begin, end );

    return 0;
}

char *displayBinary( unsigned short value ) {
    char *output{ new char[17]{} };

    unsigned int k{1};
    k <<= 15;

    std::size_t n{0};
    for(; k > 0; k >>= 1 ) {
        if(value & k) {
            output[n] = '1';
        } else {
            output[n] = '0';
        }
        n++;
    }
    output[16] = '\0';
    return output;
}

unsigned short clear_bits( unsigned short num, unsigned short begin, unsigned short end ) {
    unsigned short result{0};
    unsigned short mask{0xFFFFU};
    unsigned short bit{1};

    // Creating the mask
    for( std::size_t i{0}; i < 16; ++i ) {
        if( i >= begin && i <= end ) {
            mask &= ~bit;
        }
        bit <<= 1;
    }

    result = num & mask;

    return result;
}