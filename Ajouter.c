#include "Header.h"
liste Ajouter(liste L)
{
   liste p=(liste)malloc(sizeof(employe));
   char g=205,h=201,i=187,j=200,l=188,m=186,c=130;

   printf("\n                     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,i);
   printf("                     %c AJOUT D\'UN EMPLOYE %c",m,m);
   printf("\n                     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",j,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,g,l);
   printf("\n\n Veuillez fournir les informations demand%ces ci-dessous:\n",c);
   printf("------------------------------------------------------------------");
  //Ajout en tete de la liste
   p=New(L);
   p->suiv=L;
   L=p;


 return (L);
}

