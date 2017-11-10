#include "Header.h"
liste AdresseN(liste L)
{
    printf("\n**Adresse:");
    printf( "\nVille: ");
    fflush(stdin);
    gets(L->adr.v);
    printf("\nRue: ");
    fflush(stdin);
    gets(L->adr.r);
    printf("\nCode postal: ");
    scanf("%d", &(L->adr.c));
    return (L);
}

