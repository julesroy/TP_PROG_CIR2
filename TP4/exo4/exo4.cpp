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

int main(){
    return 0;
}