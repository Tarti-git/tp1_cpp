#include "Point.h"

/*
BUT : déplacer les coordonnées du point
PRINCIPE : on additionne les valeurs en argument avec données membres nX et nY;
ENTREE : le point et les valeurs à ajouter à ses coordonnées
SORTIE : le point avec ses coordonnées modifiées
*/

void Point::deplace(float nbX, float nbY)
{
	nX += nbX;
	nY += nbY;
}

/*
BUT : afficher les coordonnées du point
PRINCIPE : on print les coordonnées nX et nY du point suivi d'un \n;
ENTREE : le point
SORTIE : le point (nX et nY affichés en output)
*/

void Point::affiche()
{
	std::cout << "[" << nX << ":" << nY << "]\n";
}

//constructeur
Point::Point(float nbX, float nbY)
{
	nX = nbX;
	nY = nbY;
}

//destructeur
Point::~Point()
{
}
