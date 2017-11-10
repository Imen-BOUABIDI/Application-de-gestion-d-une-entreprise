#include "Header.h"
liste Modifier(liste q,liste L)
{
    int p,ok,i;
    char k=130,a=133;
    char S[11];
    printf("\n--------------------------");
    printf("\n1- Identifiant unique.");
    printf("\n2- Num%cro de cin.",k);
    printf("\n3- Nom.");
    printf("\n4- Pr%cnom.",k);
    printf("\n5- Sexe.");
    printf("\n6- Date de naissance.");
    printf("\n7- Adresse.");
    printf("\n8- Num%cro de t%cl%cphone.",k,k,k);
    printf("\n9- Etat civil.");
    printf("\n10-Nombre d\'enfants.");
    printf("\n0- Pour retourner %c l'acceuil",a);
    printf("\n--------------------------");
    do
    {
        do
        {
            printf("\nChoisissez le num%cro de l\'information que vous voulez modifier: ",k);
            scanf("%d",&p);
            if((p<0)||(p>10))
                printf("ERREUR, V%crifiez votre choix svp!\n",k);
        }
        while((p<0)||(p>10));
        switch(p)
        {
        case 0: //pour retourner à Acceuil
            Action();
            break;
        case 1: //pour modifier ID
        {
            do
            {
                printf("\n**Identifiant unique(10 chiffres): ");
                LectureID(S);
                if(VerifID(L,S)!=NULL)
                    printf("\nCet identifiant existe d%cj%c! Veuillez r%cessayer SVP.\n",k,a,k);
            }
            while(VerifID(L,S)!=NULL);
            strcpy(q->Id,S);
            break;
        }
        case 2: //pour modifier le numéro de CIN
        {
            do
            {
                printf("\n**Ncin(8 chiffres): ");
                LectureCIN(S);
                if(VerifCIN(L,S)!=NULL)
                    printf("\nCe num%cro de CIN existe d%cj%c! Veuillez r%cessayer SVP.\n",k,k,a,k);
            }
            while(VerifCIN(L,S)!=NULL);
            strcpy(q->ncin,S);
            break;
        }
        case 3: //pour modifier le nom
        {
            printf("\n**Nom: ");
            fflush(stdin);
            gets(q->nom);
            break;
        }
        case 4: //pour modifier le prenom
        {
            printf("\n**Pr%cnom: ",k);
            fflush(stdin);
            gets(q->prenom);
            break;
        }
        case 5: //pour modifier le sexe
        {
            printf("\n**Sexe(Saisissez F ou f pour f%cminin et M ou m pour masculin): ",k);
            do
            {
                scanf("%c", &q->s);
            }
            while((q->s!='F')&&(q->s!='f')&&(q->s!='m')&&(q->s!='M'));
            break;
        }
        case 6: //pour modifier la date de naissance
        {
            q=DateN(q);
            break;
        }
        case 7: //pour modifier l'adresse
        {
            q=AdresseN(q);
            break;
        }
        case 8: //pour modifier le numéro de tel
        {
            printf("\n**Num%cro de t%cl%cphone(8 chiffres): ",k,k,k);
            do
            {
                i=-1;
                gets(q->tel);
                do
                {
                    i++;
                }
                while((isdigit((q->tel)[i])!=0)&&(i!=8));
            }
            while((i!=8)||(strlen(q->tel)!=8));
            break;
        }
        case 9: //pour modifier l'etat civil
        {
            q=EtatC(q);
            break;
        }
        case 10: //pour modifier le nombre d'enfants
        {
            printf("\n**Nombre d\'enfants: ");
            scanf("%d", &(q->m));
            break;
        }

        }
        Record(q);
        if( p !=0 )
        {
            printf("\n------------------------------------------------------------------------------");
            do
            {
                printf("\nSi vous voulez modifier une autre information, entrez 1. Sinon, entrer 0: ");
                scanf("%d", &ok);
            }
            while((ok!=1)&&(ok!=0));
        }

    }
    while((ok!=0)&&(p!=0));
    if(ok==0) printf("\nLa modification a %ct%c effectu%ce!",k,k,k);
    return (L);
}

