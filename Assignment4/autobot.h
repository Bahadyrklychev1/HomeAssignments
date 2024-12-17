//Клычев Баходир Исламбекович, группа 24.Б83-мм 
//Implementation of Transformer classes
#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "transformer.h"
#include "Weapon.h"

class Autobot : public Transformer {
private:
    Weapon weapon;

public:
    Autobot(const std::string& name, const std::string& weaponType);
    
    Autobot(const std::string& name);

    virtual ~Autobot(); 

    bool assist(); 

    void transform() override; 

    void useWeapon() const;

    friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
};

#endif 
