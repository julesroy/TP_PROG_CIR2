//
// Created by julesr0y on 20/09/23.
//
#include <iostream>
#define multiplier(x,y)(x * y)

using namespace std;

int main() {
    int nb;
    cin >> nb;
    if(nb < 1 || nb > 9){
        cout << "Veuillez saisir un nombre entre 1 et 9" << endl;
        return 0;
    }
    cout << "Affichage table de " << nb << endl;
    for(int i = 1; i <= 10; i++){
        cout << i * nb << endl;
    }
}