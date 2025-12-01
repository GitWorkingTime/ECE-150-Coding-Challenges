#include <iostream>

// Function Declarations
int main();
void iterateArray( unsigned int *arr, std::size_t index, std::size_t cap );

// Function Definitions
int main() {
    unsigned int arr[10]{0, 2, 4, 123, 4, 2, 5, 9, 10};
    std::size_t i{0};
    iterateArray( arr, i, 10 );
    return 0;
}

/*
 * @param: unsigned int *arr - The array we want to iterate through
 * @param: std::size_t index - The index we want to look at in the array
 * @param: std::size_t cap - The capacity of the array
 * 
 * We want to just iterate through an array and print out the element
 */
void iterateArray( unsigned int *arr, std::size_t index, std::size_t cap ) {
    if( index == (cap - 1) ) {
        return;
    }

    std::cout << arr[index] << std::endl;
    return iterateArray( arr, index + 1, cap );

}