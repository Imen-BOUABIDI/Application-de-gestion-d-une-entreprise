#include "Header.h"
void LectureCIN(char T[9])
{
    int i;
    char c=130;
    do
    {
        i=-1;
        scanf("%s",T);
        do
        {
            i++;
        }
        while((isdigit(T[i])!=0)&&(i!=8));  //ِLes caracteres doivent etre tous des chiffres
        if(((isdigit(T[i])==0)&&(i!=8))||(strlen(T)!=8))
        {
            printf("\nERREUR /!\\");
            printf("\n       %c%c%c",238,238,238);
            printf("\nLe Ncin que vous avez entr%c ne v%crifie pas les conditions demand%ces.\nVeuillez r%cessayer SVP: ",c,c,c,c);
        }
    }
    while((i!=8)||(strlen(T)!=8));//La longueur de la chaine doit etre egale à 8
}




