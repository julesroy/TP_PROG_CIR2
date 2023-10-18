//;-;
// Created by julesr0y on 29/09/23.
//
#include <iostream>
#include "Trajectory.hpp"

using namespace std;

// Définition des constructeurs
void Trajectory::print(){
    for (int i = 0; i < numberOfPoints; i++) {
        cout << points[i] << endl;
    }
}

int main(){
    Trajectory trajectoire;
    trajectoire.print();
}