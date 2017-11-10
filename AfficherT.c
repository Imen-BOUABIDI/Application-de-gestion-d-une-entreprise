#include "Header.h"
void AfficherT(liste L){
    char b=130;
	liste T;
	T=L;
	if (T==NULL)
		  printf("Il n\'existe aucun employ%c a afficher",b);
	while(T!=NULL){
            system("cls");
	        printf("\t AFFICHAGE DE TOUS LES PERSONNEL\n\n");
            printf("\n*******************************************");
            printf("\n\n Nom et Prenom :");
            printf("%s %s",T->nom,T->prenom);
            printf("\n Identifiant unique :");
            printf("%s",(T->Id));
            printf("\n Ncin : ");
            printf("%s",(T->ncin));
            printf("\n Sexe : ") ;
           if(((T->s)=='F')||((T->s)=='f'))
              printf("F%cminin.",b);
           else printf("Masculin.");
           printf("\n Date de naissance : %d/%d/%d.", (T->d).j,(T->d).m,(T->d).a);
           printf("\n Adresse : %s-Rue %s-%d.", (T->adr).v,(T->adr).r,(T->adr).c);
           printf("\n Num%cro de t%cl%cphone : ",b,b,b);
           printf("%s",(T->tel));
           printf("\n Etat civil :");
           printf("%s",(T->etat));
           printf("\n Nombre d\'enfants : %d",T->m);
           printf("\n\n*******************************************");
		if(T->suiv!=NULL)
			{
			printf("\n Frapper une touche pour voir la personne suivante\n\n");
			getch();
			}
		T=T->suiv;
	}
}
