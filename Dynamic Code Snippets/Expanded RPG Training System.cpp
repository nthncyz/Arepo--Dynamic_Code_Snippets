#include <iostream>
#include <string>

int main() {
    int choice;
    double duration, calories, energy = 100; // Energy starts at 100
    std::string activity;

    while (true) {
        std::cout << "\nFitness Activity Tracker\n";
        std::cout << "1. Jogging\n";
        std::cout << "2. Cycling\n";
        std::cout << "3. Swimming\n";
        std::cout << "4. Eat to Restore Energy\n";
        std::cout << "5. Quit\n";
        std::cout << "\nEnter your choice (1-5): ";
        std::cin >> choice;

        switch (choice) {
            case 1:  // Jogging
                std::cout << "\nEnter the time spent jogging in minutes: ";
                std::cin >> duration;
                calories = 0.75 * duration;
                energy -= calories * 0.5;  // Decrease energy based on calories burned
                std::cout << "\nCalories burned: " << calories << "\n";
                std::cout << "Energy left: " << energy << "\n";
                break;

            case 2:  // Cycling
                std::cout << "\nEnter the time spent cycling in minutes: ";
                std::cin >> duration;
                calories = 0.5 * duration;
                energy -= calories * 0.5;  // Decrease energy based on calories burned
                std::cout << "\nCalories burned: " << calories << "\n";
                std::cout << "Energy left: " << energy << "\n";
                break;

            case 3:  // Swimming
                std::cout << "\nEnter the time spent swimming in minutes: ";
                std::cin >> duration;
                calories = 0.8 * duration;
                energy -= calories * 0.5;  // Decrease energy based on calories burned
                std::cout << "\nCalories burned: " << calories << "\n";
                std::cout << "Energy left: " << energy << "\n";
                break;

            case 4:  // Eat to Restore Energy
                std::cout << "\nYou decided to eat something to restore your energy.\n";
                energy += 30;  // Restoring 30 energy points
                if (energy > 100) energy = 100;  // Max energy cap
                std::cout << "Energy restored! Current energy: " << energy << "\n";
                break;

            case 5:  // Quit
                std::cout << "\nProgram ending.\n";
                return 0;

            default:
                std::cout << "\nValid choices are 1 through 5. Try again.\n";
        }

        if (energy <= 0) {
            std::cout << "\nYou're out of energy! Please eat to restore it.\n";
        }
    }
}
