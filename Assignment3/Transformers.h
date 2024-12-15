#ifndef CLASS_TRANSFORMERS_H
#define CLASS_TRANSFORMERS_H

#include <iostream>
#include <string>
#include <memory>

class Engine {
    std::string _type;
    uint _horsepower;

public:
    Engine(std::string type = "Standard", uint horsepower = 100);
    std::string getType() const;
    void setType(const std::string& type);
    uint getHorsepower() const;
    void setHorsepower(uint horsepower);
};

class Transformers {
public:
    Transformers(uint health = 100, uint armor = 50, uint weapon = 10, uint power = 75, Engine engine = Engine());
    ~Transformers();

    bool motion();
    bool jump();
    bool attack();

    void setWeapon(uint weapon);
    uint getWeapon() const;

    void setHealth(uint health);
    uint getHealth() const;

    void setArmor(uint armor);
    uint getArmor() const;

    void setPower(uint power);
    uint getPower() const;

    void setEngine(const Engine& engine);
    Engine getEngine() const;

    void setAlly(Transformers* ally);
    Transformers* getAlly() const;

protected:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;

    Engine _engine;
    Transformers* _ally = nullptr;
};

#endif
