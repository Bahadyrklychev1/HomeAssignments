#include "Class.h"
#include <iostream>
#include <vector>

bool Class::isEven(int number) {
    return number % 2 == 0; 
}

int Class::getFive() {
    return 5; 
}

double Class::getPi() {
    return 3.14159; 
}

void Class::printMessage() {
    std::cout << "This is a simple message from Class!" << std::endl;
}

