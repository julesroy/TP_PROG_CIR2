#include <iostream>
using namespace std;
#include "exo3.hpp"

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

int main() {
    Point2D p1, p2, p3, p4;
    p1.set_point();
    p2.set_point();
    p3.set_point();
    p4.set_point();
    Vecteur v1, v2, v3;
    v1.set_vecteur(p1, p2);
    v2.set_vecteur(p3, p4);
    v3.somme(v1, v2);
    v1.produit(2);
    v3.sontEgaux(v1, v2);
}