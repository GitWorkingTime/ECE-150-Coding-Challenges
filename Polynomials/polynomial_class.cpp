#include <iostream>

class Polynomials;

class Polynomials {
    public:
        void print_polynomial( double array[], unsigned int length );
    private:

};

/*
 * @param: double array[] - the array with the polynomial's coefficients
 * @param: unsigned int length - the total number of entries in the array
 * 
 * This prints out a polynomial nicely according to these rules:
 * - All coefficients except the first should not have a leading negative sign
 *   and any negative term should instead be lead by a '-' instead of a '+'
 * - All terms wtih a coefficient of 1 or -1 should not print the 1 unless the term
 *   is the constant term
 * - All terms with a coefficient of 0 should not be printed
 * - The term with the one exponent should not have the exponent printed
 * - The constant term ( the term with the zero exponent ) should not have a 
 *   variable or exponent printed
 * - If all coefficients are zero, print a zero only
 */
void Polynomials::print_polynomial( double array[], unsigned int length ) {
    std::size_t degree{ length - 1 };
    
    // Edge Case: Nothing
    if( length == 0 ) {
        std::cout << "0" << std::endl;
        return;
    }

    // Edge Case: Array is all zeros
    bool is_zero{ true };
    for( std::size_t i{0}; i < length; ++i ) {
        if( array[i] != 0 ) {
            is_zero = false;
        }
    }

    if( is_zero ) {
        std::cout << "0" << std::endl;
        return;
    }

    // Terms
    for( std::size_t i{0}; i < length; ++i ) {
        char sign{'+'};
        double coefficient{ array[i] };
        

        // Skip term if coefficient is 0
        if( coefficient == 0 ) {
            --degree;
            continue;
        }

        // Deciding Signs:
        if( array[i + 1] < 0 ) {
            sign = '-';
        }

        if( coefficient < 0 ) {
            coefficient = -coefficient;
        }

        // Print out the terms
        if( degree > 0 ) {
            if( coefficient == 1 ) {
                std::cout << "x";
            } else {
                std::cout << coefficient << "x";
            }

            if( degree > 1 ) {
                std::cout << "^" << degree;
            }

            bool is_rest_zero{ true };
            for( std::size_t j{i + 1}; j < length; ++j ) {
                if( array[j] != 0 ) {
                    is_rest_zero = false;
                }
            }

            if( !is_rest_zero ) {
                std::cout << " " << sign << " ";
            }

        } else {
            std::cout << coefficient << std::endl;
        }
        --degree;
    }
};

int main();

int main() {
    Polynomials myPoly;
    double myExp[4]{1, -2, -1, 0};
    myPoly.print_polynomial( myExp, 4 ); 

    return 0;
}