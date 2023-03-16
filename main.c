/*
 Nom: main.c
 Goal: exercice 6.1 Faber
 Auteur: promotion 2021-2024
 Date: 15/03/2022
*/

#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>

int main()
{
    int nb,cpt,val;
    long somme,produit;
    float moyenne;


    //setlocale(LC_CTYPE, "");

    system("color f0");
    system("cls");

    printf("\nProgramme_de_lecture_de_nombre");
    printf("\nEntrez le nombre d'éléments : ");
    scanf("%d", &nb);
    //entrée des valeurs//
    somme = 0;
    produit = 1;
    for(cpt = 1; cpt <= nb; cpt++)

    {
        printf("\nEntrez valeur numéro %d : ", cpt);
        scanf("%d",&val);
        somme += val;
        produit *= val;
    }
    moyenne = (float)somme/nb;
    //affichage//
    printf("\nLa somme est   : %ld", somme);
    printf("\nLe produit est : %ld", produit);
    printf("\nLa moyenne est : %f", moyenne);

    return 0;
}
