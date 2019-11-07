#include "Point.h"

/*
BUT : déplacer les coordonnées du point
PRINCIPE : on additionne les valeurs en argument avec données membres nX et nY;
ENTREE : le point et les valeurs à ajouter à ses coordonnées
SORTIE : le point avec ses coordonnées modifiées
*/

void CPoint::deplace(float nbX, float nbY)
{
	nX += nbX;
	nY += nbY;
}

/*
BUT : renvoyer la valeur de nX
PRINCIPE : on renvoie la donnée membre privée nX par encapsulation de donnée;
ENTREE : le point
SORTIE : la valeur nX du point
*/

float CPoint::getX()
{
	return nX;
}

/*
BUT : renvoyer la valeur de nY
PRINCIPE : on renvoie la donnée membre privée nY par encapsulation de donnée;
ENTREE : le point
SORTIE : la valeur nY du point
*/

float CPoint::getY()
{
	return nY;
}

/*
BUT : afficher les coordonnées du point
PRINCIPE : on print les coordonnées nX et nY du point suivi d'un \n;
ENTREE : le point
SORTIE : le point (nX et nY affichés en output)
*/

/*void Point::affiche()
{
	std::cout << "[" << nX << ":" << nY << "]\n";
}*/

//constructeur
CPoint::CPoint(float nbX, float nbY)
{
	nX = nbX;
	nY = nbY;
}

//destructeur
CPoint::~CPoint()
{
}
