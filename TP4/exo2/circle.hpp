//
// Created by julesr0y on 09/10/23.
//

#include "shape.hpp"

class Circle : public Shape{
private:
    float radius;
public:
    Circle() : Shape(1){};
    float get_radius();
    void set_radius(const float &r);
    float get_area();
    float get_perimeter();
    void print();
};
