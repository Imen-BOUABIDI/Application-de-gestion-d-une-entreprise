#include "Header.h"
liste LireFichier(liste L)
{
    int ok;
    ok=1;
    employe* p;
    FILE *f;
    f=fopen("employe.txt","r");
    if(f==NULL)
    {
        return(L);
    }

    while(!feof(f))
    {
        p=(employe *)malloc(sizeof(employe));
        while(ok==1)
        {
            fscanf(f,"%s\n",p->Id);
            fscanf(f,"%s\n",p->ncin);
            fscanf(f,"%s\n",p->nom);
            fscanf(f,"%s\n",p->prenom);
            fscanf(f,"%s\n",&p->s);
            fscanf(f,"%d\n",&p->d.a);
            fscanf(f,"%d\n",&p->d.m);
            fscanf(f,"%d\n",&p->d.j);
            fscanf(f,"%s\n",p->adr.v);
            fscanf(f,"%s\n",p->adr.r);
            fscanf(f,"%d\n",&p->adr.c);
            fscanf(f,"%s\n",p->tel);
            fscanf(f,"%s\n",p->etat);
            fscanf(f,"%d\n",&p->m);
            break;
        }
        p->suiv=L;
        L=p;
    };
    fclose(f);
    return (L);
}


