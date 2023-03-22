#include "trisLents.h"

/* toutes mes signatures/prototypes de fonctions/méthodes + leur corps */
void echange(int* monTab, int i, int j){
	int n;
	n = monTab[i];
	monTab[i] = monTab[j];
	monTab[j] = n;
	
	}
	
void triSelection(int* monTab, int taille){
	int min;
	for(int i=0; i<taille; i++){
		min = i;
		for(int j=i+1; j<taille; j++){
			if(monTab[j]<monTab[min]){
				min = j;
			}
		}
		if(min != i){
			echange(monTab, i, min);
		}
	}

}

void triBulles(int* monTab, int taille){
	int bool;

	do{
		bool = 0;
		for(int i=0; i<taille-1; i++){
			if(monTab[i]>monTab[i+1]){
				echange(monTab, i, i+1);
				bool = 1;

			}
		}

	}while(bool == 1);

}

void triInsertion(int* monTab, int taille){
	int j;
	for(int i=0; i<taille-1;i++){
		j = i;
		while(monTab[j]>monTab[j+1]){
			echange(monTab, j, j+1);
			j--;
		}
	}
}
