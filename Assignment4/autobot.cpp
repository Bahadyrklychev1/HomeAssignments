//Клычев Баходир Исламбекович, группа 24.Б83-мм.
//Implementation of Transformer classes
#include "autobot.h"
#include <iostream>

Autobot::Autobot(const std::string& name, const std::string& weaponType)
    : Transformer(name, "Autobot"), weapon(weaponType) {}

Autobot::Autobot(const std::string& name)
    : Transformer(name, "Autobot"), weapon("Default Weapon") {}

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

Autobot::~Autobot() = default;

std::ostream& operator<<(std::ostream& os, const Autobot& autobot) {
    os << "Name: " << autobot.name << ", Type: " << autobot.type << ", Weapon: " << autobot.weapon;
    return os;
}
