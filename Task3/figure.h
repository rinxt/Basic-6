#pragma once
#include <string>

class Figure {
protected:
    std::string name_;
public:
    std::string get_name();
    virtual void print_info();
};
#pragma once
