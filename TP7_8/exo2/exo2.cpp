#include <iostream>
#include <vector>
#include <algorithm>
#include "exo2.hpp"
#include "fraction.hpp"
using namespace std;

vector<Fraction> suppr_neg_val(vector<Fraction>& liste) {
	for (int i = 0; i < liste.size(); i++) {
		if (liste[i] < Fraction(0, 1)) {
			//liste.erase(i);
		}
	}
}

void fraction_min(vector<Fraction>& liste) {
	Fraction min = liste[0];
	for (int i = 0; i < liste.size(); i++) {
		if (liste[i] < min) {
			min = liste[i];
		}
	}
	cout << "Le min est: " << min << endl;
}

void fraction_max(vector<Fraction>& liste) {
	Fraction max = liste[0];
	for (int i = 0; i < liste.size(); i++) {
		if (liste[i] > max) {
			max = liste[i];
		}
	}
	cout << "Le max est: " << max << endl;
}

int main() {
	vector<Fraction> tableau(3);
	tableau[0] = Fraction(1, 2);
	tableau[1] = Fraction(1, 3);
	tableau[2] = Fraction(1, 4);
	//Fraction resultat = tableau[0];
	//for (int i = 1; i < tableau.size(); i++) {
	//	 resultat += tableau[i];
	//}
	//cout << resultat;
	
	fraction_min(tableau);
	fraction_max(tableau);
	return 0;
}