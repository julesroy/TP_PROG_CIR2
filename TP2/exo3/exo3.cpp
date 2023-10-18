#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream fichier("exo3.txt");
    if(fichier){ //on vérifie que le fichier se soit bien ouvert
        string ligne;
        int nombreDeLignes = 0;
        int nombreDeMots = 0;
        int nombreDeLettres = 0;
        int occurrences[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        while (getline(fichier, ligne)) {
            nombreDeLignes++;

            stringstream ss(ligne);
            string mot;
            while (ss >> mot) {
                nombreDeMots++;
                nombreDeLettres += mot.length();
                for (int i = 0; i < mot.length(); i++) { //pour chaque mot
                    char lettre = tolower(mot[i]); //tolower converti les majuscules en minuscules
                    if (isalpha(lettre)) { //isalpha vérifie que ce soit une lettre (et non pas de la pnctuation par exemple)
                        int index = lettre - 'a'; //calculer l'index du tableau occurrences (on enlève la position par rapport à 'a'
                        occurrences[index]++; //on augmente de un le compteur de l'occurrence
                    }
                }
            }
        }

        fichier.close(); //on ferme le fichier

        cout << "Nombre de lignes : " << nombreDeLignes << endl;
        cout << "Nombre de mots : " << nombreDeMots << endl;
        cout << "Nombre de lettres : " << nombreDeLettres << endl;
        cout << "Occurrences des lettres : " << endl;
        for(int i = 0; i < 26; i++){
            char lettre = 'a' + i; //on calcule la position de la lettre par rapport à sa position dans le tableau occurrences
            cout << lettre << " : " << occurrences[i] << endl;
        }
    }
    else{
        cout << "Erreur" << endl; //on affiche erreur en cas de problème
    }
    return 0;
}