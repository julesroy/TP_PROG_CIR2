/* Premier programme en C */
#include<stdlib.h>
#include<stdio.h>

void factorielle_for(int nombre) {
	long long resultat = 1;
	for (int i = 1; i <= nombre; i++) {
		resultat *= i;
	}
	printf("Avec boucle for: %lld\n", resultat);
}

void factorielle_while(int nombre) {
	int j = 1;
	long long resultat = 1;
	while (j != nombre + 1) {
		resultat *= j;
		j++;
	}
	printf("Avec boucle while: %lld\n", resultat);
}

void factorielle_recursif(int nombre, long long resultat, int en_cours) {
	if (en_cours == nombre + 1) {
		printf("En recursif: %lld\n", resultat);
	}
	else
	{
		resultat *= en_cours;
		en_cours++;
		factorielle_recursif(nombre, resultat, en_cours);
	}
}

int main() {
    int nombre;
    scanf("%d", &nombre);
	factorielle_for(nombre);
	factorielle_while(nombre);
	factorielle_recursif(nombre, 1, 1);
	return EXIT_SUCCESS;
}