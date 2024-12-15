#include "MiniRobots.h"

MiniRobots::MiniRobots(uint health, uint armor, uint weapon, uint power, const std::string& size, uint heiht, uint attackZone)
    : Transformers(health, armor, weapon, power), _size(size), _height(), _attackZone() {}

void MiniRobots::setSize(const std::string& size) {
    _size = size;
}
std::string MiniRobots::getSize() const {
    return _size;
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

bool MiniRobots::protect() {
    return _armor > 30;
}
