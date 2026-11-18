#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sinliste.h"

/**************************************************************/
/*******corps des fonctions qui vont manipuler les listes******/
/**************************************************************/

/**************************************************************/
/********fonction de test de remplisage  de la liste***********/
/**************************************************************/

	bool isempty(psinliste pliste){
		if(pliste==NULL)
			return true;
	return false;
	}

/***************************************************/
/********fonction de création de la liste***********/
/***************************************************/

	psinliste new_sinliste(){
		return NULL;
		// Retourne un pointeur qui contient NULL c'est 
		// l'adresse qui sera pointée
		// C'est une première création
	}

/********************************************************************/
/********fonction d'ajout d'un élément en tête de la liste***********/
/********************************************************************/

	psinliste addelement(psinliste pliste, void *data){
		psinliste newelement;
		newelement=malloc(sizeof(sinliste));
		if(newelement==NULL)
			return NULL; // l'allocation mémoire n'a pas marché
		newelement->data=data;
		newelement->nxt=pliste;
		return newelement;	
	}

/****************************************************************/
/********fonction de calcul de la longueur de la liste***********/
/****************************************************************/

	int lenght_sinliste(psinliste pliste){
		int lenght=0;
		psinliste tmp=pliste;
		while(tmp){
			lenght++;
			tmp=tmp->nxt;
		}
		return lenght;
	}


/****************************************************************/
/********fonction de suppression d'une donnée de liste***********/
/****************************************************************/

	bool delbyposition(psinliste *ppliste, int position){
		psinliste tmp, delelement, pliste;
		pliste=*ppliste;
		int len;
		len=lenght_sinliste(pliste);
		tmp=pliste;

		if(position>=len)
			return false;
		if(position>0){
			for (int i = 0; i < position-1; ++i)
				{
					tmp=tmp->nxt; // On opère une itération jusqu'à arriver à l'element qui se trouve avant de maillon à supprimer
				}			
		}else{
			// l'element à supprimer se trouve en tête de la liste
			if(delfirst(ppliste))
				return true;
		}

		delelement=tmp->nxt; // On se positionne sur le maillon a supprimer
		tmp->nxt=delelement->nxt;
		free(delelement->data);
		free(delelement);
		return true;
		}

/****************************************************************************/
/********fonction de suppression de la première donnée de la liste***********/
/****************************************************************************/
		bool delfirst(psinliste *ppliste){
			psinliste tmp,pliste=*ppliste;
			tmp=pliste;
			pliste=pliste->nxt;
			*ppliste=pliste;
			free(tmp->data);
			free(tmp);
			return true;
		}

/****************************************************************************/
/********fonction de recherche de donnée en utilisant sa position************/
/****************************************************************************/
void findbyposition(psinliste *pliste, int position){
	
}
	
