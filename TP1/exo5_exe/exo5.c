#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_TRIES 6
#define MAX_WORD_LENGTH 20

// Fonction pour afficher l'état actuel du mot avec les lettres correctement devinées
void afficherMot(const char* mot, const char* lettresDevinees) {
    for (int i = 0; mot[i] != '\0'; i++) {
        if (strchr(lettresDevinees, mot[i]) != NULL) {
            printf("%c ", mot[i]);
        }
        else {
            printf("_ ");
        }
    }
    printf("\n");
}

int main() {
    char motADeviner[MAX_WORD_LENGTH];
    char lettresDevinees[MAX_WORD_LENGTH] = { 0 };
    int nombreDeTentatives = 0;

    printf("Mot a deviner : ");
    scanf("%s", motADeviner);

    size_t longueurMot = strlen(motADeviner);
    printf("\n");
    while (true) {
        printf("Mot a deviner : ");
        afficherMot(motADeviner, lettresDevinees);

        printf("Lettres devinees : %s\n", lettresDevinees);

        printf("Devinez une lettre : ");
        char devinette;
        scanf(" %c", &devinette);

        if (strchr(lettresDevinees, devinette) != NULL) {
            printf("Lettre deja essayee\n");
            continue;
        }

        lettresDevinees[strlen(lettresDevinees)] = devinette;

        if (strchr(motADeviner, devinette) != NULL) {
            printf("Trouve\n");
        }
        else {
            printf("Pas trouve\n");
            nombreDeTentatives++;
        }
        if (nombreDeTentatives >= MAX_TRIES) {
            printf("Game over. Le mot etait : %s\n", motADeviner);
            break;
        }
        int motComplet = 1;
        for (int i = 0; i < longueurMot; i++) {
            if (strchr(lettresDevinees, motADeviner[i]) == NULL) {
                motComplet = 0;
                break;
            }
        }
        if (motComplet) {
            printf("Win, le mot etait bien : %s\n", motADeviner);
            break;
        }
    }

    return 0;
}