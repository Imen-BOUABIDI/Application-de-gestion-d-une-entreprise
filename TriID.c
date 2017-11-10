#include "Header.h"
liste TriID(liste L)
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
    if (L==NULL)
        return (L);
    while(P!=NULL)
    {
        Q=P->suiv;
        while(Q!=NULL)
        {
            if(strcmp(P->Id,Q->Id)>0)
            {
                // aux=Q;
                strcpy(Idx,Q->Id);
                strcpy(ncinx,Q->ncin);
                strcpy( nomx,Q->nom);
                strcpy(prenomx,Q->prenom);
                sx=Q->s;
                dx=Q->d;
                adrx=Q->adr;
                strcpy( telx,Q->tel);
                strcpy(etatx,Q->etat);
                mx=Q->m;
                //   Q=P;
                strcpy(Q->Id,P->Id);
                strcpy(Q->ncin,P->ncin);
                strcpy(Q->nom,P->nom);
                strcpy(Q->prenom,P->prenom);
                Q->s=P->s;
                Q->d=P->d;
                Q->adr=P->adr;
                strcpy(Q->tel,P->tel);
                strcpy(Q->etat,P->etat);
                Q->m=P->m;
                //P=aux;
                strcpy(P->Id,Idx);
                strcpy(Q->ncin,ncinx);
                strcpy(Q->nom,nomx);
                strcpy(Q->prenom,prenomx);
                Q->s=sx;
                Q->d=dx;
                Q->adr=adrx;
                strcpy( Q->tel,telx);
                strcpy(Q->etat,etatx);
                Q->m=mx;
            }
            Q=Q->suiv;
        }
        P=P->suiv;
    }
    return L;
}
