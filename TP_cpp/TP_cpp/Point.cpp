#include "Point.h"

/*
BUT : d�placer les coordonn�es du point
PRINCIPE : on additionne les valeurs en argument avec donn�es membres nX et nY;
ENTREE : le point et les valeurs � ajouter � ses coordonn�es
SORTIE : le point avec ses coordonn�es modifi�es
*/

void Point::deplace(float nbX, float nbY)
{
	nX += nbX;
	nY += nbY;
}

/*
BUT : afficher les coordonn�es du point
PRINCIPE : on print les coordonn�es nX et nY du point suivi d'un \n;
ENTREE : le point
SORTIE : le point (nX et nY affich�s en output)
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
