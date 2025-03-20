#include "Desepticons.h"

Desepticons::Desepticons(uint health, uint armor, uint weapon, uint power, uint dangerLevel, uint numberOfModel, uint percentOfRecharge)
    : Transformers(health, armor, weapon, power), _dangerLevel(dangerLevel), _numberOfModel(numberOfModel), _percentOfRecharge(percentOfRecharge) {}

void Desepticons::setDangerLevel(uint dangerLevel) {
    _dangerLevel = dangerLevel;
}

uint Desepticons::getDangerLevel() const {
    return _dangerLevel;
}

void Desepticons::setNumberOfModel(uint numberOfModel) {
    _numberOfModel = numberOfModel;
}

uint Desepticons::getNumberOfModel() const {
    return _numberOfModel;
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