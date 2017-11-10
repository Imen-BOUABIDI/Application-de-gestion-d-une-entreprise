#include "Header.h"
liste VerifCIN(liste L, char T[9])
{
    liste p=(liste)malloc(sizeof(liste));
    liste q=NULL;
    int existe;
    p=L;
    existe=strcmp(p->ncin,T);
    if (existe==0)
        q=p;
    else
    {
        while(p->suiv!=NULL)
        {
            p=p->suiv;
            existe=strcmp(p->ncin,T);
            if (existe==0)
                q=p;
        }
    }
    return (q);
}
