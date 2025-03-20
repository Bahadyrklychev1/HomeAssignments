#include "MiniRobots.h"

MiniRobots::MiniRobots(uint health, uint armor, uint weapon, uint power, const std::string& size, uint height, uint attackZone)
    : Transformers(health, armor, weapon, power), _size(size), _height(height), _attackZone(attackZone) {}

MiniRobots::MiniRobots(const std::string& size) 
    : Transformers(), _size(size), _height(30), _attackZone(2) {}

MiniRobots::MiniRobots(int height) 
    : Transformers(), _size("Small"), _height(height), _attackZone(2) {}

bool MiniRobots::transform() {
    return false;
}

void MiniRobots::setHeight(uint height) {
    _height = height;
}
uint MiniRobots::getHeight() const {
    return _height;
}

void MiniRobots::setAttackZone(uint attackZone) {
    _attackZone = attackZone;
}
uint MiniRobots::getAttackZone() const {
    return _attackZone;
}

void MiniRobots::setSize(const std::string& size) {
    _size = size;
}
std::string MiniRobots::getSize() const {
    return _size;
}

bool MiniRobots::protect() {
    return _armor > 30;
}

// Операторы сравнения
bool MiniRobots::operator>(const MiniRobots& other) const {
    return getPower() > other.getPower();
}

bool MiniRobots::operator<(const MiniRobots& other) const {
    return getPower() < other.getPower();
}

bool MiniRobots::operator==(const MiniRobots& other) const {
    return getPower() == other.getPower();
}

// Оператор вывода
std::ostream& operator<<(std::ostream& os, const MiniRobots& miniRobot) {
    os << static_cast<const Transformers&>(miniRobot) 
       << ", Size: " << miniRobot.getSize()
       << ", Height: " << miniRobot.getHeight()
       << ", Attack Zone: " << miniRobot.getAttackZone();
    return os;
}