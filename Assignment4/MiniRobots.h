#ifndef CLASS_MINIROBOTS_H
#define CLASS_MINIROBOTS_H

#include <string>
#include "Transformers.h"

class MiniRobots : public Transformers {
public:
    MiniRobots(uint health = 70, uint armor = 45, uint weapon = 10, uint power = 55, const std::string& size = "Small", uint height = 30, uint attackZone = 2);
    MiniRobots(const std::string& size); // Перегруженный конструктор с другим типом параметра
    MiniRobots(int height); // Перегруженный конструктор с другим типом параметра

    bool transform();

    void setHeight(uint height);
    uint getHeight() const;

    void setAttackZone(uint attackZone);
    uint getAttackZone() const;

    void setSize(const std::string& size);
    std::string getSize() const;

    bool protect();

    // Операторы сравнения
    bool operator>(const MiniRobots& other) const;
    bool operator<(const MiniRobots& other) const;
    bool operator==(const MiniRobots& other) const;

    // Оператор вывода
    friend std::ostream& operator<<(std::ostream& os, const MiniRobots& miniRobot);

private:
    std::string _size;
    uint _height;
    uint _attackZone;
};

#endif