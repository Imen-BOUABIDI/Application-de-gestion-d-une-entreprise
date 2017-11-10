#include "Header.h"
void EcrireFichier(liste L)
{
    liste p;
    FILE *f;
    p=L;
    f=fopen("employe.txt","w");
    if(L==NULL)
    {
        fclose(f);
    }
    while(p!=NULL)
    {
        fprintf(f,"%s\n",p->Id);
        fprintf(f,"%s\n",p->ncin);
        fputs(p->nom,f);
        fputs("\n",f);
        fputs(p->prenom,f);
        fputs("\n",f);
        fprintf(f,"%c\n",p->s);
        fprintf(f,"%d\n",p->d.a);
        fprintf(f,"%d\n",p->d.m);
        fprintf(f,"%d\n",p->d.j);
        fputs(p->adr.v,f);
        fputs("\n",f);
        fputs(p->adr.r,f);
        fputs("\n",f);
        fprintf(f,"%d\n",p->adr.c);
        fprintf(f,"%s\n",p->tel);
        fprintf(f,"%s\n",p->etat);
        fprintf(f,"%d\n",p->m);
        p=p->suiv;
    }
    fclose(f);
}

