#include "Header.h"
liste New(liste L)
{
    liste p,q;
    q=malloc(sizeof(employe));
    p=malloc(sizeof(employe));
    char c=130,z=133;
    int i=0;

    /*Lecture de Id*/
    if (L==NULL)
    {
        printf("\n**Identifiant unique(10 chiffres): ");
        LectureID(p->Id);
    }
    else
    {
        do
        {
            printf("\n**Identifiant unique(10 chiffres): ");  //l'unicité de l'identifiant
            LectureID(p->Id);
            q=VerifID(L,p->Id);
            if(q!=NULL)
                printf("\nCet identifiant existe d%cj%c! V%crifier votre ID SVP.\n",c,z,c);
        }
        while(q!=NULL);

    }

    /*Lecture de n_cin*/
    if(L==NULL)
    {
        printf("\n**Ncin(8 chiffres): ");
        LectureCIN(p->ncin);
    }
    else
    {
        do
        {
            printf("\n**Ncin(8 chiffres): ");
            LectureCIN(p->ncin);
            if(VerifCIN(L,p->ncin)!=NULL)
                printf("\nCe num%cro de CIN existe d%cj%c! V%crifier votre CIN SVP.\n",c,c,z,c);
        }
        while(VerifCIN(L,p->ncin)!=NULL);
    }
    /*Nom*/
    printf("\n**Nom: ");
    fflush(stdin);
    gets(p->nom);
    /*Prénom*/
    printf("\n**Pr%cnom: ",c);
    fflush(stdin);
    gets(p->prenom);
    /*Sexe*/
    printf("\n**Sexe(Saisissez F ou f pour f%cminin et M ou m pour masculin): ",c);
    do
    {
        scanf("%c", &(p->s));
    }
    while((p->s!='F')&&(p->s!='f')&&(p->s!='m')&&(p->s!='M'));
    /*date*/
    p=DateN(p);
    /*adresse*/
    p=AdresseN(p);
    /*Num téléphne*/
    printf("\n**Num%cro de t%cl%cphone(8 chiffres): ",c,c,c);
    do
    {
        i=-1;
        fflush(stdin);
        gets(p->tel);
        do
        {
            i++;
        }
        while((isdigit((p->tel)[i])!=0)&&(i!=8));

    }
    while((i!=8)||(strlen(p->tel)!=8));
    /*etat civil*/
    p=EtatC(p);
    /*Nombre d'enfants*/
    printf("\n**Nombre d\'enfants: ");
    scanf("%d", &(p->m));
    printf("\nToutes les donn%ces ont %ct%c enregistr%ces!",c,c,c,c);

    p->suiv=NULL;
    Record(p);
    return p;
}

