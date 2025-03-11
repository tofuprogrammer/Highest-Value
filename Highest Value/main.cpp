#include <iostream>

int main() {
    float userNumbers[10];
    float highestValue = -INFINITY; // Initialised with a value to prevent odd behaviour
    for (int numberOfInputs = 0; numberOfInputs < 10; numberOfInputs++){
        std::cout << "Enter a number: ";
        std::cin >> userNumbers[numberOfInputs];
    }
    for (int numberOfInputs = 0; numberOfInputs < 10; numberOfInputs++){
        if (userNumbers[numberOfInputs] > highestValue){
            highestValue = userNumbers[numberOfInputs]; // Overwrites highest number with user's input
        }
    }
    std::cout << "The highest value you entered is " << highestValue << '\n';
}
