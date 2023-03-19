/*
Name: DIV TAB
Goal:Afficher une suite d'éléments
Date:
Author: irene amedji
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Ce programme demande de saisir une suite de nombre et d'afficher cette suite après les avoir divisé par leur valeur maximale//

int main()
{
    const int NbMax = 100;
    float suitNbre[NbMax];
    int cpt,NbElem;
    float ValMax;
    char rep;

    setlocale(LC_CTYPE, "");
    system("color F0");
    printf ("TABLEAU de valeurs");

    do
    {
        system("cls");
        do
        {
            printf("\nDonnez le nombre d'éléments [2-100] :");
            scanf("%d", &NbElem);
        }
        while (NbElem<2 || NbElem>100);

        for (cpt = 0; cpt < NbElem; cpt++)
        {
            printf ("\nValeur N°%d =",cpt+1);
            scanf("%f", &suitNbre[cpt]);
        }

        ValMax = suitNbre[0];
        for (cpt=1; cpt<NbElem; cpt++)
        {
            if (suitNbre[cpt] > ValMax)
            {
                ValMax = suitNbre[cpt];
            }
        }
        printf("\nLe max = %.2f\n",ValMax);

        for (cpt=0; cpt<NbElem; cpt++)
        {
            suitNbre[cpt]=suitNbre[cpt]/ValMax;
            printf("\nValeur N°%d = %.2f\n",cpt+1,suitNbre[cpt]);
        }
        fflush(stdin);
        printf("\nVoulez-vous recommencer(O/N)? ");
        scanf("%c",&rep);
    }
    while(rep=='O');

    return
     0;
}
