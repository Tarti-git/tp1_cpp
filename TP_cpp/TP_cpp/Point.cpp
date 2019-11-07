#include "Point.h"

/*
BUT : d�placer les coordonn�es du point
PRINCIPE : on additionne les valeurs en argument avec donn�es membres nX et nY;
ENTREE : le point et les valeurs � ajouter � ses coordonn�es
SORTIE : le point avec ses coordonn�es modifi�es
*/

void CPoint::deplace(float nbX, float nbY)
{
	nX += nbX;
	nY += nbY;
}

/*
BUT : renvoyer la valeur de nX
PRINCIPE : on renvoie la donn�e membre priv�e nX par encapsulation de donn�e;
ENTREE : le point
SORTIE : la valeur nX du point
*/

float CPoint::getX()
{
	return nX;
}

/*
BUT : renvoyer la valeur de nY
PRINCIPE : on renvoie la donn�e membre priv�e nY par encapsulation de donn�e;
ENTREE : le point
SORTIE : la valeur nY du point
*/

float CPoint::getY()
{
	return nY;
}

/*
BUT : afficher les coordonn�es du point
PRINCIPE : on print les coordonn�es nX et nY du point suivi d'un \n;
ENTREE : le point
SORTIE : le point (nX et nY affich�s en output)
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
