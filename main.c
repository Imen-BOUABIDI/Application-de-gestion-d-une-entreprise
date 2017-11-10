#include "Header.h"

int main()
{
    /*Déclaration des variables*/
    int j,i,ok;
    char S[11];
    char c=130,b=205,a=201,k=187,d=186,e=200,f=188,h=133;
    liste L=(liste)malloc(sizeof(liste));
    /*corps du programme*/
    L=CreerListe();
    L=LireFichier(L);
    do
    {
        system("cls");
        Acceuil();
        do
        {
            printf("\n Votre choix svp: ");
            scanf("%d", &i);
            if((i<0)||(i>8))
                printf("ERREUR, V%crifiez votre choix svp!\n",c);
        }
        while((i<0)||(i>8));
        switch(i)
        {
        case 0: //pour sortir
        {
            system("cls");
            printf("\n            ---------------------------");
            printf("\n             Merci pour votre visite!");
            printf("\n            ---------------------------");
            return 0;
            break;
        }
        case 1://pour ajouter un employe
        {
            system("cls");
            L=Ajouter(L);
            EcrireFichier(L);
            break;
        }
        case 2: //pour afficher les informations d'un employe
        {
            system("cls");
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,k);
            /*CADRE*/        printf("                 %c FICHE D\'UN EMPLOYE %c",d,d);
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,f);
            if (L==NULL)
                printf("Il n\'existe aucun employ%c %c afficher.",c,h);
            else
            {
                printf("\nDonnez l\'identifiant unique de l\'employ%c %c afficher(10 chiffres): ",c,h);
                LectureID(S);
                if (VerifID(L,S)==NULL)
                    printf("\nIl n\'existe aucun employ%c ayant cet identifiant.",c);
                else Afficher(VerifID(L,S));
            }
            break;
        }
        case 3: //pour modifier les informations d'un employe
        {
            system("cls");
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,k);
            printf("                 %c MODIFICATION DES INFORMATIONS %c",d,d);
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,f);
            if (L==NULL)
                printf("Il n\'existe aucun employ%c.",c);
            else
            {
                printf("\nDonnez l\'identifiant unique de l\'employ%c %c modifier(10 chiffres): ",c,h);
                LectureID(S);
                if (VerifID(L,S)==NULL)
                    printf("\nIl n\'existe aucun employ%c ayant cet identifiant.",c);
                else
                {
                    printf("\nCet identifiant correspond %c l\'employ%c(e): %s %s.",h,c,VerifID(L,S)->nom,VerifID(L,S)->prenom);
                    L=Modifier(VerifID(L,S),L);
                }
                EcrireFichier(L);
            }
            break;
        }
        case 4: //pour supprimer un employe
        {
            system("cls");
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,k);
            printf("                 %c SUPRESSION D\'UN EMPLOYE   %c",d,d);
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,f);
            if (L==NULL)
                printf("Il n\'existe aucun employ%c %c supprimer.",c,h);
            else
            {
                printf("\nDonnez l\'identifiant unique de l\'employ%c %c supprimer(10 chiffres): ",c,h);
                LectureID(S);
                if(VerifID(L,S)==NULL)
                    printf("\nIl n\'existe aucun employ%c ayant cet identifiant.",c);
                else
                {
                    char m;
                    system("color c0");
                    printf("\n ETES VOUS SUR DE SUPPRIMER LES INFORMATIONS DE CE EMPLOY%c (o\\n)?\t",b);
                    m=getch();
                    system("color 1f");
                    if (m=='o')
                    {
                        L=Supprimer(L,VerifID(L,S));
                        printf("\nLa supression a %ct%c effectu%ce!",c,c,c);
                    }
                    if (m=='n')
                        printf("\nLa suppression est annul%ce!",c);
                    if (L==NULL)
                    {
                        EcrireFichier(L);
                        remove("employe.txt");
                        remove("record.txt");
                    }
                    else
                    {
                        EcrireFichier(L);
                        Record(L);
                    }
                }
            }
            break;
        }
        case 5: //pour trier la liste des employe seelon l'ID
        {
            system("cls");
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,k);
            printf("                 %c TRI de la liste des employ%cs %c",d,c,d);
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,f);
            if (L==NULL)
                printf("Il n\'existe aucun employ%c .",c);
            else
            {
                L=TriID(L);
                printf("Le tri selon l'ID des employ%cs a %ct%c bien effectu%ce!\n",c,c,c,c);
                char m;
                printf("Tapez \"o\" pour voir la liste tri%ce ou \"n\" pour ignorer\n",c);
                m=getch();
                if (m=='o')
                {
                    printf("\nLa Liste tri%ce est :",c);
                    AfficherT(L);
                }
            }
            break;
        }
        case 6: //pour trier la liste des employes selon le nom
        {
            system("cls");
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,k);
            printf("                 %c TRI de la liste des employ%cs %c",d,c,d);
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,f);
            if (L==NULL)
                printf("Il n\'existe aucun employ%c.",c);
            else
            {
                L=TriNom(L);
                printf("Le tri selon le nom des employ%cs a %ct%c bien effectu%ce!\n",c,c,c,c);
                printf("Tapez \"o\" pour voir la liste tri%ce ou \"n\" pour ignorer\n",c);
                char m;
                m=getch();
                if (m=='o')
                {
                    printf("\nLa Liste tri%ce est :",c);
                    AfficherT(L);
                }
            }
            break;
        }
        case 7: //pour afficher tous les employes
        {
            system("cls");
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,k);
            printf("                 %c LISTE DES EMPLOYES  %c",d,d);
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,f);
            AfficherT(L);
            break;
        }
        case 8: //pour supprimer tous les employes
        {
            system("cls");
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",a,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,k);
            printf("                 %c Suppression de la liste des employ%cs  %c",d,c,d);
            printf("\n                 %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",e,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,b,f);
            if (L==NULL)
                printf("\nLa liste est vide! Il n\'y a rien %c supprimer. ",h);
            else
            {
                system("color c0");
                printf("\n ETES VOUS SURS DE SUPPRIMER TOUTE LA LISTE \a?");
                printf("\n----------\n {1} OUI \n {2} NON\n----------\n ");
                do
                {
                    printf("Votre choix: ");
                    scanf("%d",&j);
                }
                while((j!=1)&&(j!=2));
                system("color 1f");
                if (j==1)
                {
                    L=NULL;
                    remove("employe.txt");
                    remove("record.txt");
                    printf("\nLa supression a %ct%c effectu%ce!",c,c,c);
                }
                if(j==2)
                    printf("\nLa suppression est annul%ce!",c);
            }
            break;
        }

        }

        do
        {
            printf("\n\nQue voulez-vous faire ?");
            printf("\n------------------------------------");
            printf("\n {1} Retour au menu.");
            printf("\n {2} Quitter.");
            printf("\n------------------------------------");
            printf("\nVotre choix: ");
            scanf("%d", &ok);
        }
        while((ok!=1)&&(ok!=2));
        system("cls");
    }
    while((ok!=2));
    printf("\n                ---------------------------");
    printf("\n                 Merci pour votre visite!");
    printf("\n                ---------------------------");
    return 0;
}
