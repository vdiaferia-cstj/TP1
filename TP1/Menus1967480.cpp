#include "Menus.h"
#include <iostream>
#include "Formes.h"



using namespace std;

void afficherMenu1() // Affiche le menu 1
{
    cout << "1. Rectangle" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Carré" << endl;
    cout << "4. Losange" << endl;
    cout << "5. Quitter" << endl;
    cout << "Votre Choix-- >";
}

void afficherMenu2() // Affiche le menu 2 ( celui du remplissage )
{
    cout << "1. Forme pleine" << endl;
    cout << "2. Forme vide" << endl;
    cout << "3. Retour au menu précédent" << endl;
    cout << "Votre Choix-- >";
    
}

int validerMenu(int numeroMenu, int maxMenu) // Sert à valider la reponse de l'utilisateur dans afficherMenu1 et le 2
{
    int choixForme = 1;
    int choixRemplissage;
    
    while (numeroMenu == 1 || numeroMenu == 2 || choixForme != 5)
    {

        if (numeroMenu == 1)
        {
        
            maxMenu = 5; // Quitter est la dernière valeur valide du menu. En haut de 5 et en bas de 1, c'est invalide.

            afficherMenu1();
            cin >> choixForme;
            cout << endl;



            if (choixForme < 1 || choixForme > 5)
            {
                while (choixForme < 1 || choixForme > 5)
                {
                    cout << "Erreur: Vous devez entrer un nombre entier entre 1 et 5." << endl;
                    cout << "Veuillez recommencer." << endl;
                    cout << endl;
                    afficherMenu1();
                    cin >> choixForme;
                }
            }
            if (choixForme == maxMenu) // dans ce cas, 5 qui dans le menu 5 est quitter // être inséré. 
            {
                cout << "Vous avez choisis de quitter." << endl;
                return 0;
            }
            else
            {
                if (choixForme == 5)
                {
                    return 0;
                }
             }
        
        
          }
    else 
       afficherMenu2();
       cin >> choixRemplissage;
       if (choixRemplissage < 1 || choixRemplissage > 3)
       {


           while (choixRemplissage < 1 || choixRemplissage > 3)
           {
               cout << "Erreur: Vous devez entrer une valeure comprise entre 1 et 3." << endl;
               cout << endl;
               afficherMenu2();
           }
           if (choixRemplissage == 3)
           {
               afficherMenu1();
               cin >> choixForme;
               if (choixForme < 1 || choixForme > 5)
               {
                   while (choixRemplissage == 3)
                   {
                       while (choixForme < 1 || choixForme > 5)
                       {
                           cout << "Erreur: Vous devez entrer un nombre entier entre 1 et 5." << endl;
                           cout << "Veuillez recommencer." << endl;
                           cout << endl;
                           afficherMenu1();
                           cin >> choixForme;
                       }
                       afficherMenu2();
                       cin >> choixRemplissage;
                   }
               }
           }
       }
        
        return choixForme, choixRemplissage;
    }
}






