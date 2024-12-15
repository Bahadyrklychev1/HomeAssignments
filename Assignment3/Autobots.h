#ifndef CLASS_AUTOBOTS_H
#define CLASS_AUTOBOTS_H

#include <string>
#include "Transformers.h"

class Autobots : public Transformers {
public:
    Autobots(uint health = 100, uint armor = 50, uint weapon = 10, uint power = 75, const std::string& weaponType = "Blaster", uint skillLevel = 3, uint sizeOfInventory = 10);
    bool transform();

    void setWeaponType(const std::string& weaponType);
    std::string getWeaponType() const;
    
    void setSkillLevel(uint skillLevel);
    uint getSkillLevel() const;

    void setSizeOfInventory(uint sizeOfInventory);
    uint getSizeOfInventory() const;

    bool protect();
private:
    std::string _weaponType;
    uint _skillLevel;
    uint _sizeOfInventory;
};

#endif
