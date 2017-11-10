#include "Header.h"
liste VerifID(liste L, char S[11])
{
    liste p=(liste)malloc(sizeof(liste));
    liste q=NULL;
    int existe;
    p=L;
    existe=strcmp(p->Id,S);
    if (existe==0)
        q=p;
    else
    {
        while(p->suiv!=NULL)
        {
            p=p->suiv;
            existe=strcmp(p->Id,S);
            if (existe==0)
                q=p;
        }
    }
    return (q);
}
