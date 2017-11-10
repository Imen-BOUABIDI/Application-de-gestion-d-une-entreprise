#include "Header.h"
void Afficher(liste L) //Afficher le fiche d'un employé
{
    char b=130;
    printf("\nFiche de l\'employ%c(e): %s %s    \n",b, L->nom, L->prenom);
    printf("\n*******************************************");
    printf("\n\n Identifiant unique: %s.",L->Id);
    printf("\n Ncin: %s.",L->ncin);
    printf("\n Sexe: ") ;
    if((L->s=='F')||((L->s=='f')))
        printf("F%cminin.",b);
    else printf("Masculin.");
    printf("\n Date de naissance: %d/%d/%d.", (L->d).j,(L->d).m,(L->d).a);
    printf("\n Adresse: %s-Rue %s-%d.", (L->adr).v,(L->adr).r,(L->adr).c);
    printf("\n Num%cro de t%cl%cphone: %s.",b,b,b,L->tel);
    printf("\n Etat civil: %s.",L->etat);
    printf("\n Nombre d\'enfants: %d.",L->m);
    printf("\n\n*******************************************");
}

