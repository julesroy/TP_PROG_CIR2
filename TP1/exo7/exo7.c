//
// Created by julesr0y on 16/09/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "time.h"

int main(){
    srand(time(NULL));
    int casestab, casesundertab;
    printf("Entrez taille du tableau\n");
    scanf("%d", &casestab);
    printf("Entrez taille des sous tableaux\n");
    scanf("%d", &casesundertab);
    int **tabprincipal;
    tabprincipal = (int**)malloc(casestab * sizeof(int*));

    //création des sous tableaux
    for(int i = 0; i < casestab; i++){
        tabprincipal[i] = (int*)malloc(casesundertab * sizeof(int));
        //remplissage sous tableau
        for(int j = 0; j < casesundertab; j++){
            tabprincipal[i][j] = rand();
        }
    }

    printf("[");
    for(int i = 0; i < casestab; i++){
        printf("[");
        for(int k = 0; k < casesundertab; k++){
            if(k == casesundertab - 1){
                printf("%d", tabprincipal[i][k]);
            }
            else {
                printf("%d,", tabprincipal[i][k]);
            }
        }
        if(i == casestab - 1){
            printf("]");
        }
        else {
            printf("],");
        }
    }
    printf("]");
    return EXIT_SUCCESS;
}