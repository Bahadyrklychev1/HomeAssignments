//Клычев Баходир Исламбекович, группа 24.Б83-мм.
//Implementation of Transformer classes
#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "transformer.h"
#include "Weapon.h"

class Decepticon : public Transformer {
private:
    Weapon weapon;

public:
    Decepticon(const std::string& name, const std::string& weaponType)
        : Transformer(name, "Decepticon"), weapon(weaponType) {}

    Decepticon(const std::string& name)
        : Transformer(name, "Decepticon"), weapon("Default Weapon") {}

    virtual ~Decepticon() = default; 

    bool sabotage(); 

    void transform() override; 

    void useWeapon() const;

    friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) {
        os << static_cast<const Transformer&>(decepticon) << ", Weapon: " << decepticon.weapon;
        return os;
    }
};

#endif 
