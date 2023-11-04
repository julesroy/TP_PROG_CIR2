//
// Created by julesr0y on 14/10/23.
//

#include <iostream>
using namespace std;
#include "circle.hpp"

float Circle::get_radius() {
    return radius;
}

void Circle::set_radius(const float& r) {
    radius = r;
}

float Circle::get_area() {
    return 3.14f*(radius*radius);
}

float Circle::get_perimeter() {
    return 2.0*3.14f*radius;
}

void Circle::print() {
    cout << "Area: " << get_area() << endl;
    cout << "Perimeter: " << get_perimeter() << endl;
}

int main(){
    Circle c;
    c.set_radius(3.0);
    c.get_area();
    c.get_perimeter();
    c.print();
    return 0;
}