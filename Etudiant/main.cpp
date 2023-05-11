#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cstdio>

using namespace std;

typedef struct tEtudiant tEtudiant;
struct tEtudiant
{
    int numero_carte;
    string nom;
    string prenom;
    double note_brute;
    double bonus;
    double note_definitive;
    char result;
};


int main()
{

    int choisir();
    void afficher_PV(vector<tEtudiant> const listEtudiant);
    void ajouterEtudiant(vector<tEtudiant> &listEtudiant);

    vector<tEtudiant>listEtudiant;
    int choix;

    do
    {
        system("cls");
        choix = choisir();
        switch(choix)
        {
        case 1 :
            ajouterEtudiant(listEtudiant);
            break;
        case 5 :
            afficher_PV(listEtudiant);
            break;
        }
    }
    while(choix != 0);
    return 0;
}

int choisir()
{
    int choix;
    cout << "Programme Gestion Notes(PGN)" << endl;
    cout << "Menu" << endl;
    cout << "1- Ajouter Etudiant"<< endl;
    cout << "2- Saisir note" << endl;
    cout << "3- Saisire note Etudiant" << endl;
    cout << "4- Délibérer" << endl;
    cout << "5- Afficher PV" << endl;
    cout << "0- Terminer" << endl;
    cout <<  "Entrez votre choix : ";
    cin >> choix;
    cin.ignore();

    return choix;
}

void ajouterEtudiant(vector<tEtudiant> &listEtudiant)
{
    tEtudiant wEtudiant;
    cout << "Entrez le numero de la carte : ";
    cin >> wEtudiant.numero_carte;
    cout << "Entrez le nom de l'Etudaint : ";
    cin >> wEtudiant.nom;
    cout << "Entrez le prenom de l'Etudiant : ";
    cin >> wEtudiant.prenom;
    wEtudiant.bonus = 0;
    wEtudiant.note_definitive = 0;
    wEtudiant.result = ' ';
    listEtudiant.push_back(wEtudiant);
}

void afficher_PV(vector<tEtudiant> const listEtudiant)
{
    tEtudiant wEtudiant;
    for(unsigned int i=0; i<listEtudiant.size() ; i++)
    {
        wEtudiant = listEtudiant[i];
        cout << wEtudiant.numero_carte;
        cout << " ";
        cout << wEtudiant.nom;
        cout << " ";
        cout << wEtudiant.prenom;
        cout << " ";
        cout << wEtudiant.bonus;
        cout << " ";
        cout << wEtudiant.note_definitive;
        cout << " ";
        cout << wEtudiant.result << endl;
    }
    cout << "Appuyez sur Entrée";
    getchar();

}   //void afficher_PV(vector<tEtudiant> const listEtudiant)


double calcul_moyenne_general(vector<tEtudiant> const listEtudiant)
{
    float somme_notes = 0.0, moyenne;
    unsigned int i, nbEtud(listEtudiant.size());
    for(i=0; i<nbEtud ; i++)
    {
        somme_notes += listEtudiant[i].note_definitive;
    }
    moyenne = somme_notes / nbEtud;
    return moyenne;
}   //double calcul_moyenne_general(vector<tEtudiant> const listEtudiant)
