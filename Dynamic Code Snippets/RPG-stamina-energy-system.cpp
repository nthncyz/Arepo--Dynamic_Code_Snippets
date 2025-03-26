#include <iostream>

int main() {
    int choice;
    double duration, calories;

    std::cout << "\nFitness Activity Tracker\n";
    std::cout << "\n1. Jogging\n2. Cycling\n3. Swimming\n4. Quit\n";
    std::cout << "\nEnter your choice (1-4): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "\nEnter the time spent jogging in minutes: ";
            std::cin >> duration;
            calories = 0.75 * duration;
            std::cout << "\nCalories burned: " << calories << "\n";
            break;
        case 2:
            std::cout << "\nEnter the time spent cycling in minutes: ";
            std::cin >> duration;
            calories = 0.5 * duration;
            std::cout << "\nCalories burned: " << calories << "\n";
            break;
        case 3:
            std::cout << "\nEnter the time spent swimming in minutes: ";
            std::cin >> duration;
            calories = 0.8 * duration;
            std::cout << "\nCalories burned: " << calories << "\n";
            break;
        case 4:
            std::cout << "\nProgram ending.\n";
            return 0;
        default:
            std::cout << "\nValid choices are 1 through 4. Try again.\n";
    }

    return 0;
}
