#include "Transformers.h"

Engine::Engine(std::string type, uint horsepower) : _type(type), _horsepower(horsepower) {}

std::string Engine::getType() const { return _type; }
void Engine::setType(const std::string& type) { _type = type; }
uint Engine::getHorsepower() const { return _horsepower; }
void Engine::setHorsepower(uint horsepower) { _horsepower = horsepower; }

Transformers::Transformers(uint health, uint armor, uint weapon, uint power, Engine engine)
    : _health(health), _armor(armor), _weapon(weapon), _power(power), _engine(engine) {}

Transformers::Transformers(int health, int armor, int weapon) 
    : _health(health), _armor(armor), _weapon(weapon), _power(75), _engine(Engine()) {}

Transformers::Transformers(int power) 
    : _health(100), _armor(50), _weapon(10), _power(power), _engine(Engine()) {}

Transformers::~Transformers() {}

bool Transformers::motion() { return true; }
bool Transformers::jump() { return true; }
bool Transformers::attack() { return true; }

void Transformers::setWeapon(uint weapon) { _weapon = weapon; }
uint Transformers::getWeapon() const { return _weapon; }

void Transformers::setHealth(uint health) { _health = health; }
uint Transformers::getHealth() const { return _health; }

void Transformers::setArmor(uint armor) { _armor = armor; }
uint Transformers::getArmor() const { return _armor; }

void Transformers::setPower(uint power) { _power = power; }
uint Transformers::getPower() const { return _power; }

void Transformers::setEngine(const Engine& engine) { _engine = engine; }
Engine Transformers::getEngine() const { return _engine; }

void Transformers::setAlly(Transformers* ally) { _ally = ally; }
Transformers* Transformers::getAlly() const { return _ally; }

// Операторы сравнения
bool Transformers::operator>(const Transformers& other) const {
    return _power > other._power;
}

bool Transformers::operator<(const Transformers& other) const {
    return _power < other._power;
}

bool Transformers::operator==(const Transformers& other) const {
    return _power == other._power;
}

// Оператор вывода
std::ostream& operator<<(std::ostream& os, const Transformers& transformer) {
    os << "Health: " << transformer.getHealth() << ", Armor: " << transformer.getArmor()
       << ", Weapon: " << transformer.getWeapon() << ", Power: " << transformer.getPower();
    return os;
}