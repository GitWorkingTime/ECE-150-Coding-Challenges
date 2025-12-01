#include <iostream>

int main();
char *split_and_interweave( char *str );

int main() {
    char *word{ new char[20]{ "giraffes" } };

    char *result = split_and_interweave( word );
    std::cout << result << std::endl;

    delete[] word;
    word = nullptr;

    delete[] result;
    result = nullptr;
    return 0;
}

char *split_and_interweave( char *str ) {
    std::size_t cap{0};
    while( str[cap] != '\0' ) {
        cap++;
    }

    std::size_t second_i{ (cap + 1) / 2 };
    std::size_t first_i{0};
    char *result{ new char[cap]{} };
    for(std::size_t i{0}; (i + 1) < (cap + 1); i += 2 ) {
        result[i] = str[first_i];
        result[i+1] = str[second_i]; 

        ++first_i;
        ++second_i;
    }
    
    result[cap] = '\0';

    return result;
}