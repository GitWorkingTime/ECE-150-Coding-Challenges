#include <iostream>

int main();
unsigned short flip_pair( unsigned short num );
char *displayBinary( unsigned short value );

int main() {
    unsigned short num{579};
    flip_pair( num );

    return 0;
}

char *displayBinary( unsigned short value ) {
    char *output{ new char[16]{} };

    unsigned short k{1};
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

unsigned short flip_pair( unsigned short num ) {
    unsigned short mask{0x3U};
    unsigned short tmp{ num };
    unsigned short result{0};
    char operations{'A'}; // 'A' for AND or 'O' for OR

    char *out{};
    out = displayBinary( tmp );
    std::cout << "tmp Initial: " << out << std::endl;
    for (int i = 0; i < 16; i += 2) {
        // Extract the 2-bit pair
        unsigned short pair = (num >> i) & 0x3;
        
        // Check if both bits are the same
        // pair == 0b00 (0) or pair == 0b11 (3)
        if (pair == 0 || pair == 3) {
            // Flip the LSB by XORing with 1
            pair ^= 1;
        }
        
        // Place the (possibly modified) pair back into result
        result |= (pair << i);
    }

    out = displayBinary( result );
    std::cout << out << std::endl;

    delete[] out;
    out = nullptr;
    return 0;
}