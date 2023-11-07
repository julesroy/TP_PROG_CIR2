#include <iostream>
using namespace std;
#include "exo3.hpp"

//Point
Point::Point() {

}

Point::Point(int x, int y) {
    p_x = x;
    p_y = y;
}

void Point::set_point() {
    cout << "Entrez les coordonnees du point : " << endl;
    cin >> p_x >> p_y;
}

int Point::get_x() {
    return p_x;
}

int Point::get_y() {
    return p_y;
}

void Point::get_point() {
    cout << "(" << p_x << ", " << p_y << ")" << endl;
}

//opérateurs
Point Point::operator+(const Point& other)
{
    Point result;
    result.p_x = this->p_x + other.p_x;
    result.p_y = this->p_y + other.p_y;
    return result;
};

int Point::operator*(const Point& other) {
    int result;
    result = (this->p_x * other.p_x) + (this->p_y * other.p_y);
    return result;
};

Point Point::PointMedian(Point &p1, Point &p2) {
    Point result;
    result.p_x = (p1.p_x + p2.p_x) / 2;
    result.p_y = (p1.p_y + p2.p_y) / 2;
    return result;
}

int main() {
    Point p1(2, 4);
    Point p2(16, 76);
    Point p3 = p1 + p2;
    p3.get_point();
    cout << p1 * p2 << endl;
    p3.PointMedian(p1, p2);
    p3.get_point();
	return 0;
}