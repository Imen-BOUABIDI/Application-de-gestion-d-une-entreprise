#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <process.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
typedef struct date
{
    unsigned int j; //jour
    unsigned int m; //mois
    unsigned int a; //ann�e
} date;
typedef struct adresse
{
    char v[20]; //ville
    char r[20]; //rue
    int c;      //code postal
} adresse;

typedef struct employe
{
    char Id[11]; //Identifiat unique
    char ncin[9]; //num�ro de CIN
    char nom[20]; //nom
    char prenom[20]; //prenom
    char s; //sexe
    date d; //date de naissance
    adresse adr; //adresse
    char tel[9]; //num�ro de t�l�phone
    char etat[20]; //etat civil
    unsigned int m; //nombre d'enfants
    struct employe* suiv; //pointeur sur le suivant
} employe;
typedef employe* liste;

void Acceuil(); //c'est l'acceuil du ce programme
liste CreerListe(); //creer une liste vide
void LectureID(char S[]); //permet de v�rifier si l'identifiant S v�rifie bien 10 chiffres
void LectureCIN(char S[]); //permet de v�rifier si le num�ro de CIN S v�rifie bien 8 chiffres
liste DateN(liste); //permet de lire la date de naissance d'un employe
liste AdresseN(liste); //permet de lire l'adresse d'un employe
liste EtatC(liste); //permet de lire l'etat civil d'un employe
liste VerifID(liste,char S[]); //permet de v�rifier si l'identifiant est unique ou non
liste VerifCIN(liste,char S[]); //permet de v�rifier si le num�ro de CIN est unique ou non
liste NeW(liste); //permet de creer un nouveau �lement de type employe pour l'ajouter dans la liste
liste Ajouter(liste); //permet d'ajouter un employe
void Afficher(liste); //permet d'afficher les information correspondantes � un employe
void AfficherT (liste); //permet d'afficher tous les employes enregistr�s dans ce programme
liste Modifier(liste,liste ); //permet de modifier les informations d'un employe
liste Supprimer(liste,liste); //permet de supprimer un employe
void EcrireFichier(liste); //permet d'�crire dans le fichier les donn�es des employ�s
liste LireFichier(liste); //permet de lire le fichier o� les donn�es des employes sont enregistr�es
void Maj(char S[]); //permet de transformer la premiere lettre apr�s un espace en majuscule
void Record(liste); //permet d'enregistrer les donn�es des employes avec date d'enregistrement(pour l'entreprise et non pas pour utilisation dans le programme)
liste TriID(liste); //permet de trier le tableau des employes selon l'identifiant
liste TriNom(liste ); //permet de trier le tableau des employes selon le nom
int Action();  //c'est la meme fonction main
