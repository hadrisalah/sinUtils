#ifndef _SIN_LISTE_
	#define _SIN_LISTE_
	
	
/**********************************************************************************************************/
/*Definition d'un type structuré, le type liste qui est une structure et d'un pointeur sur cette structure*/
/**********************************************************************************************************/
	typedef struct elementliste{
		void *data;            //valeurs de type générique void castable à souhait
		struct elementliste *nxt;// pointeur sur l'éléement suivant de la liste
	}sinliste, *psinliste;
	
	
	
/**********************************************************************************************************/
/*Definition des fonctions qui serviront à manipuler la liste et à faire les tests basique avec           */
/**********************************************************************************************************/
	// prototypes des fonctions
	psinliste new_sinliste(void);                      /* Création d'une nouvelle liste avec renvoie de son pointeur*/
	bool isempty(psinliste pliste);                    /* Teste si la liste est vide                                 */
	psinliste addelement(psinliste pliste, void *data);/* ajoute un élément en début de liste*/
	bool delfirst(psinliste *pliste);		   /* Supprime le premier élément de la liste*/
	bool delbyposition(psinliste *pliste, int position);/*Suppression d'un donnée dont on connait à l'avance sa position*/
	int lenght_sinliste(psinliste pliste);             /*Renvoie la longueur de la liste*/
	
	// A ajouter 
	// Fonction de recherche par valeur de data
	// fonction de recherche par position
	void findbyposition(psinliste *pliste, int position);
	// Fonction de modification par position
	// Fonction de modification par valeur data
	// Fonction de suppression par valeur data
	

	
#endif
