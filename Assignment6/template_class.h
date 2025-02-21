#ifndef TEMPLATE_CLASS_H
#define TEMPLATE_CLASS_H

#include <vector>

template<class T>
class Template_class {
public:
    Template_class(int number, const std::vector<float>& vector)
        : _instance(), _number(number), _vector(vector) {}

    bool foo() {
        return _instance.bar(_number, _vector);
    }

private:
    T _instance;
    int _number;
    std::vector<float> _vector;
};

// Специализация для int
template<>
class Template_class<int> {
public:
    Template_class(int, const std::vector<float>&) {}
    bool foo() { return true; }
};

// Специализация для double
template<>
class Template_class<double> {
public:
    Template_class(int, const std::vector<float>&) {}
    bool foo() { return false; }
};

#endif // TEMPLATE_CLASS_H
