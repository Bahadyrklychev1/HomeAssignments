#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include <iostream>
#include <vector>

class Transformer {
protected:
    std::string name;
    std::string type;

public:
    Transformer(const std::string& name, const std::string& type)
        : name(name), type(type) {}

    virtual ~Transformer() = default;

    virtual void transform() const {
        std::cout << "Transforming: " << type << " " << name << std::endl;
    }

    virtual void openFire() const {
        std::cout << "Firing: " << type << " " << name << std::endl;
    }

    virtual void ultimate() const {
        std::cout << "Ultimate attack: " << type << " " << name << std::endl;
    }

    bool operator<(const Transformer& other) const {
        return name < other.name;
    }

    bool operator>(const Transformer& other) const {
        return name > other.name;
    }

    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {
        os << "Name: " << transformer.name << ", Type: " << transformer.type;
        return os;
    }
};

#endif
