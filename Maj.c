#include "Header.h"
void Maj(char S[])
{
    char C[20];
    int j;
    for(j=0; S[j]!='\0'; j++) //to convert the first letter after space to capital nom
    {
        C[0]=toupper(S[0]);
        if(S[j-1]==' ')
        {
            C[j]=toupper(S[j]);
            C[j-1]=S[j-1];
        }
        else
            C[j]=S[j];
    }
    C[j]='\0';
    strcpy(S,C);
}

