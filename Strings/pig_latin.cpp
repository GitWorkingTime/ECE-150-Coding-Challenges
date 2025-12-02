#include <iostream>

int main();
char *PigLatin( char *str );

int main() {
    char *str{ new char[100]{"Hello World"}};
    PigLatin( str );

    return 0;
}

char *PigLatin( char *str ) {
    char *word{ new char[100]{} };
    std::size_t i{0};
    while( str[i] != ' ' || str[i] != '\0' ) {
        word[i] = str[i];
        ++i;
    }
    std::cout << word << std::endl;


    return word;
}