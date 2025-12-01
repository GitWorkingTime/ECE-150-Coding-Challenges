#include <iostream>

// Class Declaration
class Fibonnacci;

// Class Definition
class Fibonnacci {
    public:
        unsigned int fibonacciSeq( unsigned int n );
};

/*
 * @param: unsigned int n - the index within the fibonacci Sequence
 * Returns the value at the specific index within the fibonacci sequence
 * using recursion
 */
unsigned int Fibonnacci::fibonacciSeq( unsigned int n ) {
    if( n == 0 ) {
        return 0;
    } else if ( n == 1 ) {
        return 1;
    } else {
        return fibonacciSeq( n - 1 ) + fibonacciSeq( n - 2 );
    }
}

// Function declaration
int main();

// Function Definition
int main() {
    Fibonnacci myFib;
    std::cout << myFib.fibonacciSeq( 4 ) << std::endl;

    return 0;
}