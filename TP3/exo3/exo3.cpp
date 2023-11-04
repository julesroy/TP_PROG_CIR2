//
// Created by julesr0y on 07/10/23.
//
#include <iostream>
#include "exo3.hpp"
using namespace std;

My_vector::My_vector() : size(0), tab(nullptr) {
    // Initialisez tab à nullptr car size est égal à 0 par défaut.
}

My_vector::My_vector(const size_t &size) {
    // Allouez de la mémoire pour tab et initialisez toutes les valeurs à 0.
    tab = new my_type[size]();
}

My_vector::My_vector(const My_vector& other) : size(other.size) {
    // Allouez de la mémoire pour tab et copiez les valeurs depuis other.tab.
    tab = new my_type[size];
    for (size_t i = 0; i < size; ++i) {
        tab[i] = other.tab[i];
    }
}

My_vector::~My_vector() {
    // Libérez la mémoire allouée pour tab.
    delete[] tab;
}

const size_t &My_vector::get_size() const {
    return size;
}

void My_vector::set_an_element(const size_t &index, const my_type &val) {
    if (index >= size) {
        // Si l'index est en dehors de la taille actuelle, réallouez tab.
        size_t new_size = index + 1;
        my_type *new_tab = new my_type[new_size]();

        // Copiez les valeurs existantes depuis l'ancien tab.
        for (size_t i = 0; i < size; ++i) {
            new_tab[i] = tab[i];
        }

        // Libérez l'ancien tab et mettez à jour les membres size et tab.
        delete[] tab;
        tab = new_tab;
        size = new_size;
    }

    // Affectez la nouvelle valeur à l'index spécifié.
    tab[index] = val;
}

const my_type &My_vector::get_an_element(const size_t &index) const {
    if (index >= size) {
        // Affichez un message d'erreur et retournez 0 si l'index est hors limites.
        std::cerr << "Erreur : Index hors limites." << std::endl;
    }

    // Retournez la valeur à l'index spécifié.
    return tab[index];
}

void My_vector::push(const my_type &val) {
    // Utilisez set_an_element pour ajouter une valeur à la fin du tableau.
    set_an_element(size, val);
}

int main(){
    //My_vector tab(100);
    //tab.push(10);
    //cout << tab.get_an_element(100);
    cout << sizeof(int);
    return 0;
}