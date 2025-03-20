#include "Desepticons.h"

Desepticons::Desepticons(uint health, uint armor, uint weapon, uint power, uint dangerLevel, uint numberOfModel, uint percentOfRecharge)
    : Transformers(health, armor, weapon, power), _dangerLevel(dangerLevel), _numberOfModel(numberOfModel), _percentOfRecharge(percentOfRecharge) {}

Desepticons::Desepticons(int dangerLevel, int numberOfModel, int percentOfRecharge) 
    : Transformers(), _dangerLevel(dangerLevel), _numberOfModel(numberOfModel), _percentOfRecharge(percentOfRecharge) {}

Desepticons::Desepticons(int dangerLevel) 
    : Transformers(), _dangerLevel(dangerLevel), _numberOfModel(1), _percentOfRecharge(50) {}

bool Desepticons::transform() {
    return false;
}

void Desepticons::setNumberOfModel(uint numberOfModel) {
    _numberOfModel = numberOfModel;
}
uint Desepticons::getNumberOfModel() const {
    return _numberOfModel;
}

void Desepticons::setDangerLevel(uint dangerLevel) {
    _dangerLevel = dangerLevel;
}
uint Desepticons::getDangerLevel() const {
    return _dangerLevel;
}

void Desepticons::setPercentOfRecharge(uint percentOfRecharge) {
    _percentOfRecharge = percentOfRecharge;
}
uint Desepticons::getPercentOfRecharge() const {
    return _percentOfRecharge;
}

bool Desepticons::protect() {
    return _health > 50;
}

// Операторы сравнения
bool Desepticons::operator>(const Desepticons& other) const {
    return getPower() > other.getPower();
}

bool Desepticons::operator<(const Desepticons& other) const {
    return getPower() < other.getPower();
}

bool Desepticons::operator==(const Desepticons& other) const {
    return getPower() == other.getPower();
}

// Оператор вывода
std::ostream& operator<<(std::ostream& os, const Desepticons& desepticon) {
    os << static_cast<const Transformers&>(desepticon) 
       << ", Danger Level: " << desepticon.getDangerLevel()
       << ", Number of Model: " << desepticon.getNumberOfModel()
       << ", Percent of Recharge: " << desepticon.getPercentOfRecharge();
    return os;
}