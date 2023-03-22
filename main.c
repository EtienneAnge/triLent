#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonction.h"
#include "trisLents.h"
#define TAILLE 100


int main(){
    system("clear");
    printf("C'est le TD5 !\n");
    srand(time(NULL));
    int* monTab;
    int* monTab2;
 
    
    monTab = allouer(TAILLE);
    initialiser(monTab, TAILLE);
    printf("Tableau 1:\n");
	afficher(monTab, TAILLE);
    monTab2 = allouer(TAILLE);
    copie(monTab,  monTab2, TAILLE);


    int ans;
    printf("\n\nQuelle algo de tri utiliser ?\n[0] tri par selection    [1] tri par bulles  [2] tri par insertion\n");
    scanf("%d", &ans);

    switch(ans){
        case 0:
            triSelection(monTab2, TAILLE);
            printf("\n\nTableau trié:\n");
            afficher(monTab2, TAILLE);
            break;
        case 1:
            triBulles(monTab2, TAILLE);
            printf("\n\nTableau trié:\n");
            afficher(monTab2, TAILLE);
            break;
        case 2:
            triInsertion(monTab2, TAILLE);
            printf("\n\nTableau trié:\n");
            afficher(monTab2, TAILLE);
            break;
        default:
            printf("Erreur de saisie");
    }


    return 0;
}
