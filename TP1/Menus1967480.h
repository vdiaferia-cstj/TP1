#pragma once
#include <iostream>
using namespace std;

void afficherMenu1();// : Fonction qui affiche le menu 1

void afficherMenu2();// : Fonction qui affiche le menu 2

int validerMenu(int menu1, int quitter); //: Fonction qui lit le choix de l�utilisateur et v�rifie que le choix est bien parmi les
					// choix offerts dans le menu, informations pass�es en param�tre. Cette fonction
					// retourne le choix valid�.L�utilisateur peut taper n�importe quoi au clavier, le
					//  programme ne part pas en boucle infinie.