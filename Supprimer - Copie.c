#include "Header.h"
liste Supprimer(liste L,liste p)
{
    liste q=L;
    if(p==L)
        L=L->suiv;
    else
    {
        while(q->suiv!=p)
            q=q->suiv;
        q->suiv=(q->suiv)->suiv;
    }
    return (L);
}



