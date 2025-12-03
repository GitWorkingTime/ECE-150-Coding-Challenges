#include <iostream>

int main();
void pigLatin( char *str );

int main() {
    char str[100]{"welcome to my pig latin converter"};
    pigLatin( str );
    return 0;
}

/* 
 * @param: char *str - a C-style string input
 * 
 * This function takes a string and converts it into pig latin. It's a simple application so
 * it doesn't include capitalization and punctuation checking. Input is expected to be all lowercase
 * and full words with no apostrophe and the like. 
 */
void pigLatin( char *str ) {
    std::cout << "Input:  " << str << std::endl;
    std::size_t str_len{0};
    while( str[str_len] != '\0' ) {
        ++str_len;
    }

    std::size_t curr{0};
    std::size_t parsed_len{0};
    std::size_t result_len{0};
    char *word{ new char[100]{} };
    char *result{ new char[100]{} };

    for( std::size_t i{0}; i < (str_len + 1); ++i ) {
        // If the string has a space or ends with the null character, we've reached the end of a word
        if(str[i] == ' ' || str[i] == '\0') {
            curr = i + 1;
            
            // Extract the word
            std::size_t word_len{ curr - parsed_len  };
            for( std::size_t j{0}; j < word_len; ++j ) {
                word[j] = str[parsed_len + j];
            }

            // Remove the white space at the end
            --word_len;
            parsed_len = curr;
            char tmp{ word[0] };
            
            // Shift the letters by one letter down
            for(std::size_t i{0}; i < word_len; ++i ) {
                word[i] = word[i + 1];
            }

            // Implement pig latin
            word[word_len - 1] = tmp;
            word[word_len] = 'a';
            word[word_len + 1] = 'y';

            std::size_t new_word_len{ word_len + 2 };

            // Add the word to the final result string
            for(std::size_t i{0}; i < new_word_len; ++i ) {
                result[result_len + i] = word[i];
            }
            result[result_len + new_word_len] = ' ';
            result_len += new_word_len + 1;
            result[result_len] = '\0';

            // Clear word:
            for(std::size_t i{0}; i < word_len + 2; ++i ) {
                word[i] = '\0';
            }
        }
    }

    std::cout << "Output: " << result << std::endl;

    delete[] word;
    delete[] result;
    result = nullptr;
    word = nullptr;

    return;
}