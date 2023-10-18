// exo6.cpp : fichier source de votre cible.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "time.h"
#include "exo6.h"

int main()
{
	srand(time(NULL));
	int mytab[100];
	for (int i = 0; i < 100; i++) {
		int nombreAleatoire = rand();
		mytab[i] = nombreAleatoire;
	}

	printf("[");
	for (int j = 0; j < 100; j++) {
		printf("%d, ", mytab[j]);
	}
	printf("]\n\n");

	//tri bulle
	bool estTrie = false;
	int un, deux, permute, cpt = 0;
	while (!estTrie) {
		estTrie = true;

		for (int k = 0; k < 100 - 1; k++) {
			if (mytab[k] > mytab[k + 1]) {
				permute = mytab[k];
				mytab[k] = mytab[k + 1];
				mytab[k + 1] = permute;
				cpt++;
				estTrie = false;
			}
		}

		if (estTrie) {
			break;
		}
	}

	printf("[");
	for (int j = 0; j < 100; j++) {
		printf("%d, ", mytab[j]);
	}
	printf("]\n\n");

	return 0;
}
