#include <stdio.h>
#include <stdlib.h>

int main()
{
    char prenom [30];
    int l=0,i;
    printf("donnez notre prenom : ");
    gets(prenom);
    for (i=0;i<30;i++)
        if(prenom[i]!='\0')
        l++;
   else
    break;
   printf("votre prenom contient %d lettres",l);
    return 0;
}
