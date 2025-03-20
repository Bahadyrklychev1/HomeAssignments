#include "Autobots.h"

Autobots::Autobots(uint health, uint armor, uint weapon, uint power, const std::string& weaponType, uint skillLevel, uint sizeOfInventory)
    : Transformers(health, armor, weapon, power), _weaponType(weaponType), _skillLevel(skillLevel), _sizeOfInventory(sizeOfInventory) {}

Autobots::Autobots(const std::string& weaponType) 
    : Transformers(), _weaponType(weaponType), _skillLevel(3), _sizeOfInventory(10) {}

Autobots::Autobots(int skillLevel) 
    : Transformers(), _weaponType("Blaster"), _skillLevel(skillLevel), _sizeOfInventory(10) {}

bool Autobots::transform() {
    return false;
}

void Autobots::setWeaponType(const std::string& weaponType) {
    _weaponType = weaponType;
}
std::string Autobots::getWeaponType() const {
    return _weaponType;
}

void Autobots::setSkillLevel(uint skillLevel) {
    _skillLevel = skillLevel;
}
uint Autobots::getSkillLevel() const {
    return _skillLevel;
}

void Autobots::setSizeOfInventory(uint sizeOfInventory) {
    _sizeOfInventory = sizeOfInventory;
}
uint Autobots::getSizeOfInventory() const {
    return _sizeOfInventory;
}

bool Autobots::protect() {
    return _power > 50;
}

// Операторы сравнения
bool Autobots::operator>(const Autobots& other) const {
    return getPower() > other.getPower();
}

bool Autobots::operator<(const Autobots& other) const {
    return getPower() < other.getPower();
}

bool Autobots::operator==(const Autobots& other) const {
    return getPower() == other.getPower();
}

// Оператор вывода
std::ostream& operator<<(std::ostream& os, const Autobots& autobot) {
    os << static_cast<const Transformers&>(autobot) 
       << ", Weapon Type: " << autobot.getWeaponType()
       << ", Skill Level: " << autobot.getSkillLevel()
       << ", Inventory Size: " << autobot.getSizeOfInventory();
    return os;
}