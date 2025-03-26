// Filename: noise_monitoring.cpp
// Description: This code monitors noise levels and issues a warning if the level exceeds a threshold.
// Usage: This snippet is intended for use in an environmental monitoring system that alerts
//        users to potential noise pollution issues.

#include <iostream>

int main() {
    int noiseLevel;

    std::cout << "Enter noise level in dB: ";
    std::cin >> noiseLevel;

    if (noiseLevel > 85) {
        std::cout << "Alert! Noise pollution detected. It is advisable to wear ear plugs." << std::endl;
    } else {
        std::cout << "Safe noise level." << std::endl;
    }

    return 0;
}
