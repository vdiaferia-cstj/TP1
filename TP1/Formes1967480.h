#pragma once



void dessinerRectangle(); // : Fonction qui dessine un rectangle ou un carré dont la hauteur, la largeur et le
						 //   mode de remplissage sont passés en paramètre.

void dessinerTriangle1(); // Fonction qui dessine un triangle dans la position 1 dont la hauteur et le mode
						 // de remplissage sont passés en paramètre.

void dessinerTriangle2(); // Fonction qui dessine un triangle dans la position 2 dont la hauteur et le mode
						 // de remplissage sont passés en paramètre.

void dessinerTriangle3(); // Fonction qui dessine un triangle dans la position 3 dont la hauteur et le mode
						 // de remplissage sont passés en paramètre.

void dessinerTriangle4(); // Fonction qui dessine un triangle dans la position 4 dont la hauteur et le mode
						 // de remplissage sont passés en paramètre.

void dessinerLosange(int hauteur); // Fonction qui dessine un losange dont la hauteur et le mode de remplissage sont
					   // passés en paramètre.
int genererNombreAleatoire(); // Fonction qui retourne un nombre aléatoire compris entre min et max passés en
							  // paramètre.
void traiterCarre(int choixRemplissage);

void traiterRectangle(int choixRemplissage);

void traiterTriangle(int choixRemplissage);

void traiterLosange(int choixRemplissage);