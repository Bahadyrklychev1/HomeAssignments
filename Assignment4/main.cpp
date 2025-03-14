//Клычев Баходир Исламбекович, группа 24.Б83-мм.
//Implementation of Transformer classes
#include "autobot.h"
#include <iostream>

bool Autobot::assist() {
    std::cout << name << " is assisting!" << std::endl;
    return true;
}

void Autobot::transform() {
    std::cout << name << " is transforming!" << std::endl;
}

void Autobot::useWeapon() const {
    weapon.use();
}
