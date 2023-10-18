//
// Created by julesr0y on 14/10/23.
//
#include <iostream>
using namespace std;
#include "exo4.hpp"

void Vecteur::set_vecteur() {
    cout << "Entrez les coordonnées du vecteur : " << endl;
    cin >> x >> y;
}

void Vecteur::somme(Vecteur& v1, Vecteur& v2) {
    float v_x = v1.x + v2.x;
    float v_y = v1.y + v2.y;
    cout << "La somme des vecteurs est : [" << v_x << ", " << v_y << "]" << endl;

}

void Vecteur::produit(int reel) {
    cout << "Le produit du vecteur par le réel est : [" << x * reel << ", " << y * reel << "]" << endl;
}

void Vecteur::sontEgaux(Vecteur& v1, Vecteur& v2) {
    if (v1.x == v2.x && v1.y == v2.y) {
        cout << "Les vecteurs sont égaux" << endl;
    }
    else {
        cout << "Les vecteurs ne sont pas égaux" << endl;
    }
}

float Vecteur::get_x() {
    return x;
}

float Vecteur::get_y() {
    return y;
}

void Polygone::set_points() {
    Vecteur a, b, c;
    a.set_vecteur();
    b.set_vecteur();
    c.set_vecteur();
    points[0] = a;
    points[1] = b;
    points[2] = c;
}

void Polygone::afficher_points() {
    for (int i = 0; i < 3; i++) {
        cout << "x = " << points[i].get_x() << ", y = " << points[i].get_y() << endl;
    }
}

void Polygone::area() {
    float somme = 0.0;
    for (int i = 0; i < 3; i++) {
        if (i < 2) {
            somme += ((points[i].get_x() * points[i + 1].get_y()) - (points[i + 1].get_x() * points[i].get_y()));
        }
        else {
            somme += ((points[i].get_x() * points[0].get_y()) - (points[0].get_x() * points[i].get_y()));
        }
    }
    float calc = 0.5 * (somme);
    cout << "Aire = " << calc << endl;
}

int main(){
    Polygone p;
    p.set_points();
    p.area();
    return 0;
}