#include "Header.h"
void Record(liste L)
{
    int i;
    FILE *info;
    info=fopen("record.txt","a+");
    //************************
    liste T;
    T=L;
    while(T!=NULL)
    {
        Maj(T->nom);
        Maj(T->prenom);
        //*****************************
        fprintf(info,"Nom et Prenom : %s %s\n",T->nom, T->prenom);
        fprintf(info,"Identifiant : %s\n",T->Id);
        fprintf(info,"Numero de CIN : %s\n",T->ncin);
        fprintf(info,"Sexe : %c\n",T->s);
        fprintf(info,"Date de naissance : %d/%d/%d\n",T->d.a,T->d.m,T->d.j);
        fprintf(info,"Adresse : %s-Rue %s-%d\n", (T->adr).v,(T->adr).r,(T->adr).c);
        fprintf(info,"Numero de telephone : %s\n",T->tel);
        fprintf(info,"Etat civil: %s\n",T->etat);
        fprintf(info,"Nombre d'enfants : %d\n",T->m);
        T=T->suiv;


        //pour date et temps

        time_t mytime;
        mytime = time(NULL);
        fprintf(info,"date d'enregistrement des données:%s",ctime(&mytime));
        //**************************
        for(i=0; i<=50; i++)
            fprintf(info,"%c",'_');
        fprintf(info,"\n");
        fclose(info);
    }
}
