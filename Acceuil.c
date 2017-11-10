#include "Header.h"
void Acceuil()
{
    //system("color 1f");
    char p=130,q=133,a=201,b=205,k=187,c=200,e=188,d=186; //CONSTRUCTION DU CADRE
    printf("           %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,k);
    printf("           %c GESTION DU PERSONNEL D\'UNE ENTREPRISE %c",d,d);
    printf("\n           %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",c,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,e);
    printf("\n*************************** BIENVENUE ***************************\n\n");

    printf(" Veuillez choisir le num%cro de l\'action que vous voulez effectuer:",p);
    printf("\n -----------------------------------------------------------------\n");
    printf(" {1} Ajouter un nouvel employ%c.",p);
    printf("\n {2} Afficher les informations correspondantes %c un employ%c.",q,p);
    printf("\n {3} Modifier les informations relatives %c un employ%c.",q,p);
    printf("\n {4} Supprimer un employ%c.",p);
    printf("\n {5} Trier la liste des employ%cs selon l\'ID.",p);
    printf("\n {6} Trier la liste des employ%cs selon le nom.",p);
    printf("\n {7} Afficher la liste des employ%cs.",p);
    printf("\n {8} Supprimer toute la liste des employ%cs.",p);
    printf("\n {0} Quitter.");
    printf("\n -----------------------------------------------------------------");
}
