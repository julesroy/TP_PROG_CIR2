//
// Created by julesr0y on 09/10/23.
//
#include <iostream>
using namespace std;

class A {
public :
    A () { x = 0; cout << "1"; }
    A (int px) { x = px; cout << "2"; }
    A (const A& pa) { x = pa.x; cout << "3"; }
protected :
    int x;
};

class B {
public :
    B (const A& pa=A()) : a(pa) { cout << "4"; }
    B (const A& pa, int py) { a = pa; y = py; cout << "5"; }
protected :
    A a;
    int y;
};

class C : public B {
public :
    C (int pz=1) { z = pz; cout << "6"; }
    C (A pa) : B(pa) { z = 0; cout << "7"; }
    C (const B& pb) : B(pb), a(1) { z = 0; cout << "8"; }
protected :
    A a;
    int z;
};

int main() {
    cout << "-- A --\n"; //affiche A
    A a0; cout << endl; //constructeur par défaut, affiche 1
    A a1(3); cout << endl; //définit avec deuximeme constructeur (valeur pour px), affiche 2
    A a2(a1); cout << endl; //définit avec constructeur qui prend en parametre une instance de la classe A, affiche 3
    A a3 = a2; cout << endl; //définit avec constructeur qui prend en parametre une instance de la classe A, affiche 3
    a3 = a1; cout << endl; //affecte a1 à a3
    cout << "-- B --\n"; //affiche B
    B b0(a0,3); cout << endl; //définit avec constructeur qui prend en parametre une instance de la classe A et un int, affiche 2, 5
    B b1(a1); cout << endl; //définit avec constructeur qui prend en parametre une instance de la classe A, affiche 3, 4
    B b2; cout << endl; //définit avec constructeur qui prend en parametre une instance de la classe A, affiche 1, 3, 4
    cout << "-- C --\n"; //affiche C
    C c0; cout << endl; //définit avec constructeur qui prend en parametre un int, affiche 1, 3, 4, 1, 6
    C c1(a1); cout << endl; //définit avec constructeur qui prend en parametre une instance de la classe A, affiche 3, 3, 4, 1, 7
    C c2(b2); cout << endl; //définit avec constructeur qui prend en parametre une instance de la classe B, affiche 3, 2, 8
}