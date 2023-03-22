#include "fonction.h"
#include <stdlib.h>
#include <stdio.h>



/* toutes mes signatures/prototypes de fonctions/méthodes + leur corps */

int* allouer(int taille){
	int* tab;
	tab = malloc(taille * sizeof(int));
	
	return tab;
	}
	
void initialiser(int* monTab,int taille){
	for(int i=0; i<taille; i++){
		monTab[i] = rand() % 1000;
		}
	}

void afficher(int* monTab,int taille){
	printf("| ");
	for(int i=0; i<taille; i++){
		printf("%d | ", monTab[i]);
		}
	printf("\n");
	}
	
void copie(int* tableauOriginal, int* tableauCopie, int tailleTableau){
	for(int i=0; i<tailleTableau; i++){
		tableauCopie[i] = tableauOriginal[i];

		}
	
	}
	


