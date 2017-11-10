#include "Header.h"
void LectureID(char S[11])
{
    int i;
    char c=130;
    do
    {
        i=-1;
        scanf("%s",S);
        do
        {
            i++;
        }
        while((isdigit(S[i])!=0)&&(i!=10));  /*controle sur les caracteres */

        if(((isdigit(S[i])==0)&&(i!=10))||(strlen(S)!=10))
        {/*Message d'erreur*/
            printf("\nERREUR /!\\");
            printf("\n       %c%c%c",238,238,238);
            printf("\nL\'identifiant que vous avez entr%c ne v%crifie pas les conditions demand%ces.\nVeuillez r%cessayer SVP: ",c,c,c,c);
        }
    }
    while((i!=10)||(strlen(S)!=10));/*Controle sur la longueur*/
}


