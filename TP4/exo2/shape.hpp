//
// Created by julesr0y on 14/10/23.
//

#ifndef TP4_PROG_CIR2_SHAPE_HPP
#define TP4_PROG_CIR2_SHAPE_HPP
class Shape{
private:
    const int id_;
protected:
    Shape(const int &id) : id_(id) {};
    int color;
    int getID();
public:
    int get_color();
    void set_color();
};
#endif //TP4_PROG_CIR2_SHAPE_HPP
