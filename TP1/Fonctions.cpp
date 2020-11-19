#include "Fonctions.h"


int lireEntier()
{
	string clavier;

	getline(cin, clavier, '\n');	// getline va permettre de lire et supprimer tout ce qu'il y a dans la m�moire du clavier
// Probl�me, si la variable clavier ne commence pas par des chiffres, stoi plante le programme.
// Avant d'utiliser stoi, il faut s'assurer que la variable clavier n'est pas vide, 
// qu'elle commence par un chiffre positif ou n�gatif
	while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
		|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))
	{
		// on veut un chiffre positif ou un chiffre n�gatif : le signe moins le premier caract�re et le deuxi�me chiffre 
		// doit �tre entre 0 et 9)
		cout << "Erreur : Vous devez taper des chiffres." << endl;
		cout << "Veuillez entrer un nombre entier :";
		//cin >> nombre;
		getline(cin, clavier, '\n');	// getline va permettre de lire et supprimer tout ce qu'il y a dans la m�moire du clavier
	}

	// Quand on sort de la boucle, on est s�r que clavier commence par un chiffre, on peut le convertir

	return stoi(clavier);			// s pour string to et i pour integer permet de convertir la chaine pass�e 
									// en param�tre en valeur enti�re
	// On constate que si on tape un caract�re qui n'est pas un chiffre (0 � 9), le programme part en boucle infinie
	// Pour corriger ce probl�me, on va toujours lire le clavier avec un getline et on stocke l'information dans un string
	// Et ensuite on convertit la chaine de caract�res en entier ou en float ou double


}
