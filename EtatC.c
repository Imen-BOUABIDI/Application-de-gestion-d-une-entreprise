#include "Header.h"

liste EtatC(liste L)
{
    int p;
    char b=130,a=133;
    printf("\n**Etat civil:\n");
    printf("----------------\n");
    printf(" 1-C%clibataire.\n 2-Mari%c(e).\n 3-Veuf\\Veuve.\n 4-Divorc%c(e).\n 5-Fianc%c(e)\n",b,b,b,b);
    printf("----------------\n");
    do
    {
        printf("Choisissez le num%cro qui correspond %c l\'%ctat civil: ",b,a,b);
        scanf("%d",&p);
        if((p<=0)||(p>5))
            printf("ERREUR, V%crifiez votre choix svp!\n",b);
    }
    while((p<=0)||(p>5));
    switch(p)
    {
    case 1:
    {
        strcpy(L->etat,"celibataire");
        break;
    }
    case 2:
    {
        strcpy(L->etat,"Marie(e)");
        break;
    }
    case 3:
    {
        strcpy(L->etat,"Veuf\\Veuve");
        break;
    }
    case 4:
    {
        strcpy(L->etat,"Divorce(e)");
        break;
    }
    case 5:
    {
        strcpy(L->etat,"Fiance(e)");
        break;
    }
    }
    return (L);

}

