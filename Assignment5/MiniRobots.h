#ifndef CLASS_MINIROBOTS_H
#define CLASS_MINIROBOTS_H

#include <string>
#include "Transformers.h"

class MiniRobots : public Transformers {
public:
    MiniRobots(uint health = 70, uint armor = 45, uint weapon = 10, uint power = 55, const std::string& size = "Small", uint height = 30, uint attackZone = 2);

    void transform() override {
        std::cout << "Transform method from MiniRobots class" << std::endl;
    }

    void openFire() override {
        std::cout << "OpenFire method from MiniRobots class" << std::endl;
    }

    void ulta() override {
        std::cout << "Ulta method from MiniRobots class" << std::endl;
    }

    void setHeight(uint height);
    uint getHeight() const;

    void setAttackZone(uint attackZone);
    uint getAttackZone() const;

    void setSize(const std::string& size);
    std::string getSize() const;

    bool protect();

private:
    std::string _size;
    uint _height;
    uint _attackZone;
};

#endif