// Filename: weather_advisory.cpp
// Description: This code determines whether to issue a weather advisory based on the temperature.
// Usage: This snippet is designed for use in a weather station program that needs to alert
//        citizens about potential road hazards due to ice.

#include <iostream>

int main() {
    // Example usage:
    int temperature = -2; // Temperature in Celsius

    std::cout << "Temperature: " << temperature << std::endl;

    if (temperature <= 0) {
        std::cout << "Warning: possible danger on the roads today due to the presence of ice." << std::endl;
    } else {
        std::cout << "No weather advisory for today." << std::endl;
    }

    return 0;
}
