#include <iostream>

int main();
void DisplayTable( char choices[3][3] );
void playersTurn( char choices[3][3] );
void computersTurn( char choices[3][3] );

int main() {
    char choices[3][3]{
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char first{};
    unsigned short column{0};
    unsigned short row{0};

    DisplayTable( choices );
    
    do {
        std::cout << "Do you want to go first? (y\\n): ";
        std::cin >> first;
        if( !(first == 'y' || first == 'Y') && !(first == 'n' || first == 'N') ) {
            std::cout << "Invalid Choice" << std::endl;
        }

    } while ( !(first == 'y' || first == 'Y') && !(first == 'n' || first == 'N') );

    if( first == 'y' || first == 'Y' ) {
        playersTurn( choices );
    } else {

    }


    return 0;
}

void DisplayTable( char choices[3][3] ) {
    std::cout << std::endl;
    std::cout << "    1   2   3 " << std::endl;
    std::cout << "      |   |   " << std::endl;
    std::cout << "A   " << choices[0][0] << " | " << choices[0][1] << " | " << choices[0][2] << std::endl;
    std::cout << "   ---+---+---" << std::endl;
    std::cout << "B   " << choices[1][0] << " | " << choices[1][1] << " | " << choices[1][2] << std::endl;
    std::cout << "   ---+---+---" << std::endl;
    std::cout << "C   " << choices[2][0] << " | " << choices[2][1] << " | " << choices[2][2] << std::endl;
    std::cout << "      |   |   " << std::endl;
    std::cout << std::endl;
    return;
}

void playersTurn( char choices[3][3] ) {
    std::string choice{};
    unsigned short column{0};
    unsigned short row{0};

    bool invalid = true;
    do {
        std::cout << "Choose your Cell (E.g: A1, C2, B3, etc...): ";
        std::cin >> choice;

        if( choice[0] == 'A' || choice[0] == 'a' ) {
            column = 0;
        } else if( choice[0] == 'B' || choice[0] == 'b' ) {
            column = 1;
        } else if( choice[0] == 'C' || choice[0] == 'c' ) {
            column = 2;
        } else {
            std::cout << "Invalid Format" << std::endl;
            continue;
        }

        if( choice[1] == '1') {
            row = 0;
            invalid = false;
        } else if( choice[1] == '2' ) {
            row = 1;
            invalid = false;
        } else if( choice[1] == '3' ) {
            row = 2;
            invalid = false;
        } else {
            std::cout << "Invalid Format" << std::endl;
        }
    } while ( invalid );

    if( choices[column][row] != ' ' ) {
        std::cout << "Can't choose that Cell. Choose Another One" << std::endl;
    } else {
        choices[column][row] = 'X';
    }

    DisplayTable(choices);
    return;
}

void computersTurn( char choices[3][3] ) {

    return;
}