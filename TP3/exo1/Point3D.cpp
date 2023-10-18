//
// Created by julesr0y on 29/09/23.
//
#include "Point3D.hpp"
#include <iostream>
#include <cstdlib> // pour la génération de nombres aléatoires
#include "math.h"

using namespace std;

// Définition des constructeurs
Point3D::Point3D() {
    // Remplir les coordonnées avec des valeurs aléatoires entre 0 et 100
    x = rand() % 101;
    y = rand() % 101;
    z = rand() % 101;
}

Point3D::Point3D(const float &newx, const float &newy, const float &newz) {
    // Remplir les coordonnées avec les nouvelles valeurs
    x = newx;
    y = newy;
    z = newz;
}

// Définition des setters et des getters
void Point3D::setXYZ(const float &newx, const float &newy, const float &newz) {
    x = newx;
    y = newy;
    z = newz;
}

void Point3D::setX(const float &newx) {
    x = newx;
}

void Point3D::setY(const float &newy) {
    y = newy;
}

void Point3D::setZ(const float &newz) {
    z = newz;
}

float Point3D::getX() {
    return x;
}

float Point3D::getY() {
    return y;
}

float Point3D::getZ() {
    return z;
}

// Définition de la méthode print
void Point3D::print() {
    cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

// Définition de la méthode distanceTo
float Point3D::distanceTo(const Point3D &otherPoint3D) {
    float dx = x - otherPoint3D.x;
    float dy = y - otherPoint3D.y;
    float dz = z - otherPoint3D.z;
    return sqrt(dx * dx + dy * dy + dz * dz);
}