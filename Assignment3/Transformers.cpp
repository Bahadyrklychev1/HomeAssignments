#include "Transformers.h"

Engine::Engine(std::string type, uint horsepower) : _type(type), _horsepower(horsepower) {}

std::string Engine::getType() const { return _type; }
void Engine::setType(const std::string& type) { _type = type; }
uint Engine::getHorsepower() const { return _horsepower; }
void Engine::setHorsepower(uint horsepower) { _horsepower = horsepower; }


Transformers::Transformers(uint health, uint armor, uint weapon, uint power, Engine engine)
    : _health(health), _armor(armor), _weapon(weapon), _power(power), _engine(engine) {}

Transformers::~Transformers() {}

bool Transformers::motion() { 
    return true; 
    }
bool Transformers::jump() { 
    return true; 
    }
bool Transformers::attack() { 
    return true; 
    }

void Transformers::setWeapon(uint weapon) { 
    _weapon = weapon; 
    }
uint Transformers::getWeapon() const {  
    return _weapon; 
    }

void Transformers::setHealth(uint health) { 
    _health = health; 
    }
uint Transformers::getHealth() const { 
    return _health; 
    }

void Transformers::setArmor(uint armor) { 
    _armor = armor; 
    }
uint Transformers::getArmor() const { 
    return _armor; 
    }

void Transformers::setPower(uint power) { 
    _power = power; 
    }
uint Transformers::getPower() const { 
    return _power; 
    }

void Transformers::setEngine(const Engine& engine) { 
    _engine = engine; 
    }
Engine Transformers::getEngine() const { 
    return _engine; 
    }

void Transformers::setAlly(Transformers* ally) { 
    _ally = ally; 
    }
Transformers* Transformers::getAlly() const { 
    return _ally; 
    }
