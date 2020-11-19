#include "Formes.h"
#include <iostream>
#include "Menus.h"

using namespace std;

void traiterRectangle(int choixRemplissage)
{
    dessinerRectangle(); // Appel la fonction pour dessiner la forme
}







void traiterCarre(int choixRemplissage)
{
    cout << "Veuillez entrer la hauteur et largeur du carré. :";
    dessinerRectangle(); // Appel la fonction pour dessiner la forme
}






void traiterTriangle(int hauteur)
{
    cout << "Veuillez entrer la hauteur du rectangle. :";
    cin >> hauteur; // Entre la hauteur

    
}





void traiterLosange(int choixRemplissage)
{
    // Déclarations des variables
    int hauteur;
    cout << "Veuillez entrer la hauteur du losange";
    cin >> hauteur; // Entre la hauteur
    dessinerLosange(hauteur); // Appel la fonction pour dessiner la forme
}







void dessinerRectangle()
{
    // Déclarations des variables
    int hauteur;
    int largeur;

    cout << "Veuillez entrer la hauteur du rectangle. :";
    cin >> hauteur; // Entre la hauteur
    cout << "Veuillez entrer la largeur du rectangle. :";
    cin >> largeur; // Entre la largeur
    for (int h = 0; h < hauteur; h++)
    {
        for (int l = 0; l < largeur; l++)
        {
            cout << "*";
        }
    }
}







void dessinerLosange(int hauteur)
{
    cout << "Veuillez entrer la hauteur du losange.";
    cin >> hauteur; // Entre la hauteur
    cout << endl;
    
    for (int h = 0; h < hauteur; ++h)
    {
        for (int l = 0; l < hauteur; ++l)
        {
            cout << ((h - hauteur / 2) + (l - hauteur / 2) <= hauteur / 2 ? "*" : " ");
        }
        cout << endl;
    }


}
