#include "Header.h"
liste DateN(liste L)
{
    char b=130;
    int x,y,z,ok;char D[25]; char A[5]; int AN,i;
    printf("\n**Date de naissance:");
    time_t mytime;
    mytime = time(NULL);
    strcpy(D,ctime(&mytime));
    for (i=0;i<5;i++){
        A[i]=D[i+20];
    }
    AN=atoi(A); //=l'année actuelle
   // printf("%d",AN);
    do
    {
        printf("\nAnn%ce: ",b);
        scanf("%d", &(L->d.a));
    }
    while((L->d.a<AN-55)||(L->d.a>AN-20));
    /*année bissextile ou non*/
    x=((L->d).a)%400;
    y=((L->d).a)%4;
    z=((L->d).a)%100;
    if((x==0)||((y==0)&&(z!=0)))
        ok=1;
    else ok=0;

    do
    {
        printf("\nMois: ");
        scanf("%d", &(L->d).m);
    }
    while(((L->d).m<=0)||((L->d).m>12));
    /*Jour*/
    switch((L->d).m)
    {
    case 1:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>31)||((L->d).j<=0));
        break;
    }
    case 2:
    {
        if(ok==1)
        {
            do
            {
                printf("\nJour: ");
                scanf("%d", &(L->d).j);
            }
            while(((L->d).j>29)||((L->d).j<=0));
        }
        else
        {
            do
            {
                printf("\nJour: ");
                scanf("%d", &(L->d).j);
            }
            while(((L->d).j>28)||((L->d).j<=0));
        }
        break;
    }
    case 3:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>31)||((L->d).j<=0));
        break;
    }
    case 4:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>30)||((L->d).j<=0));
        break;
    }
    case 5:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>31)||((L->d).j<=0));
        break;
    }
    case 6:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>30)||((L->d).j<=0));
        break;
    }
    case 7:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>31)||((L->d).j<=0));
        break;
    }
    case 8:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>31)||((L->d).j<=0));
        break;
    }
    case 9:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>30)||((L->d).j<=0));
        break;
    }
    case 10:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>31)||((L->d).j<=0));
        break;
    }
    case 11:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>30)||((L->d).j<=0));
        break;
    }
    case 12:
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>31)||((L->d).j<=0));
        break;
    }
    {
        do
        {
            printf("\nJour: ");
            scanf("%d", &(L->d).j);
        }
        while(((L->d).j>31)||((L->d).j<=0));
        break;
    }

    }
    return (L);
}

