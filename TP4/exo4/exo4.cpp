//
// Created by julesr0y on 14/10/23.
//
#include <iostream>
using namespace std;
#include "exo4.hpp"


//Point2D
void Point2D::set_point() {
    cout << "Entrez les coordonnees du point : " << endl;
    cin >> p_x >> p_y;
}

float Point2D::get_x() {
    return p_x;
}

float Point2D::get_y() {
    return p_y;
}

void Point2D::get_point() {
    cout << "(" << p_x << ", " << p_y << ")";
}


//Vecteur
void Vecteur::set_vecteur(Point2D p1, Point2D p2) {
    v_x = p2.get_x() - p1.get_x();
    v_y = p2.get_y() - p1.get_y();
}

void Vecteur::somme(Vecteur& v1, Vecteur& v2) {
    v_x = v1.get_x() + v2.get_x();
    v_y = v1.get_y() + v2.get_y();
    cout << "La somme des vecteurs est : [" << v_x << ", " << v_y << "]" << endl;
}

void Vecteur::produit(int reel) {
    cout << "Le produit du vecteur par le reel est : [" << v_x * reel << ", " << v_y * reel << "]" << endl;
}

void Vecteur::sontEgaux(Vecteur& v1, Vecteur& v2) {
    if (v1.get_x() == v2.get_x() && v1.get_y() == v2.get_y()) {
        cout << "Les vecteurs sont egaux" << endl;
    }
    else {
        cout << "Les vecteurs ne sont pas egaux" << endl;
    }
}

float Vecteur::get_x() {
    return v_x;
}

float Vecteur::get_y() {
    return v_y;
}

void Vecteur::get_vecteur() {
    cout << "Vecteur (x): " << v_x << ", Vecteur (y): " << v_y << endl;
}

void Polygone::set_points() {
    a.set_point();
    b.set_point();
    c.set_point();
    d.set_point();
    points[0] = a;
    points[1] = b;
    points[2] = c;
    points[3] = d;
    points[4] = a; //le dernier point coïncide avec le premier
}

void Polygone::afficher_points() {
    cout << "a: ";
    points[0].get_point();
    cout << endl;
    cout << "b: ";
    points[1].get_point();
    cout << endl;
    cout << "c: ";
    points[2].get_point();
    cout << endl;
    cout << "d: ";
    points[3].get_point();
    cout << endl;
}

void Polygone::area() {
    float somme = 0.0;
    for (int i = 0; i < 4; i++) {
        somme += ((points[i].get_x() * points[i+1].get_y()) - (points[i+1].get_x() * points[i].get_y()));
    }
    float calc = 0.5 * somme;
    cout << "Aire = " << calc << endl;
}

int main(){
    Polygone p;
    p.set_points();
    p.area();
    return 0;
}