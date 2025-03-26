#include <iostream>

int main() {
    char hemisphere;
    int month;

    // Ask for hemisphere and validate input
    std::cout << "Enter a hemisphere (N - S): ";
    std::cin >> hemisphere;
    
    if (hemisphere != 'N' && hemisphere != 'S') {
        std::cout << "Please enter a valid hemisphere (N - S)." << std::endl;
        return 0;  // Exit with 0 instead of crashing
    }

    // Ask for month and validate input
    std::cout << "Enter a month number (1 - 12): ";
    std::cin >> month;
    
    if (month < 1 || month > 12) {
        std::cout << "Please enter a valid month number (1 - 12)." << std::endl;
        return 0;  // Exit with 0 instead of crashing
    }

    // Determine the season using nested switch statements
    switch (hemisphere) {
        case 'N':  // Northern Hemisphere
            switch (month) {
                case 12: case 1: case 2:
                    std::cout << "The season is Winter." << std::endl;
                    break;
                case 3: case 4: case 5:
                    std::cout << "The season is Spring." << std::endl;
                    break;
                case 6: case 7: case 8:
                    std::cout << "The season is Summer." << std::endl;
                    break;
                case 9: case 10: case 11:
                    std::cout << "The season is Fall." << std::endl;
                    break;
            }
            break;

        case 'S':  // Southern Hemisphere
            switch (month) {
                case 12: case 1: case 2:
                    std::cout << "The season is Summer." << std::endl;
                    break;
                case 3: case 4: case 5:
                    std::cout << "The season is Fall." << std::endl;
                    break;
                case 6: case 7: case 8:
                    std::cout << "The season is Winter." << std::endl;
                    break;
                case 9: case 10: case 11:
                    std::cout << "The season is Spring." << std::endl;
                    break;
            }
            break;
    }

    return 0;
}
