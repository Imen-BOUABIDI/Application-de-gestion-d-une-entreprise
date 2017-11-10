#include "Header.h"
liste TriNom(liste L)
{
    char Idx[11];
    char ncinx[9];
    char nomx[20];
    char prenomx[20];
    char sx;
    date dx;
    adresse adrx;
    char telx[9];
    char etatx[20];
    unsigned int mx;
    liste P;
    liste Q;
    P=L;
    liste min;
    liste T;
    for (Q=P; Q->suiv != NULL; Q=Q->suiv)
    {
        min=Q;
        for (T=Q->suiv; T != NULL; T=T->suiv)
        {
            if (strcmp(T->nom,min->nom)<0)//(T->val < min->val)
                min=T;
        }
        if (min != Q)
        {
            //aux=min->val;
            strcpy(Idx,min->Id);
            strcpy(ncinx,min->ncin);
            strcpy( nomx,min->nom);
            strcpy(prenomx,min->prenom);
            sx=min->s;
            dx=min->d;
            adrx=min->adr;
            strcpy( telx,min->tel);
            strcpy(etatx,min->etat);
            mx=min->m;
            //min->val = Q->val;
            strcpy(min->Id,Q->Id);
            strcpy(min->ncin,Q->ncin);
            strcpy(min->nom,Q->nom);
            strcpy(min->prenom,Q->prenom);
            min->s=Q->s;
            min->d=Q->d;
            min->adr=Q->adr;
            strcpy(min->tel,Q->tel);
            strcpy(min->etat,Q->etat);
            min->m=Q->m;
            //Q->val = aux;
            strcpy(Q->Id,Idx);
            strcpy(Q->ncin,ncinx);
            strcpy(Q->nom,nomx);
            strcpy(Q->prenom,prenomx);
            Q->s=sx;
            Q->d=dx;
            Q->adr=adrx;
            strcpy(Q->tel ,telx);
            strcpy(Q->etat,etatx);
            Q->m=mx;
        }
    }
    return(L);
}
