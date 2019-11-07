#include "Point.h"

/*
BUT : calculer la valeur rho des coordonn�es polaires du point
PRINCIPE : on applique la formule mathematique de rho et on retourne sa valeur
ENTREE : le point
SORTIE : la valeur rho
*/

float CPoint::rho()
{
	return nRho;
}

/*BUT: calculer la valeur theta des coordonn�es polaires du point
PRINCIPE : on applique la formule mathematique de theta et on retourne sa valeur
ENTREE : le point
SORTIE : la valeur theta*/

float CPoint::theta()
{
	return nTheta;
}

/*
BUT : effectuer une rotation du point
PRINCIPE : on on multiplie notre valeur par Pi/180, puis nous multiplions nos coordonn�es par les cos et sin de cette valeur
ENTREE : le point et la valeur de rotation
SORTIE : le point avec ses coordonn�es modifi�es
*/

void CPoint::rotation(float b)
{
	float tmpX = getX();
	float tmpY = getY();

	if (tmpY < 0)
		nTheta *= -1;
	float xM, yM;
	b *= M_PI / 180;
	xM = tmpX;
	yM = tmpY;
	tmpX = xM * cos(b) + yM * sin(b);
	tmpY = -xM * sin(b) + yM * cos(b);
	nRho = sqrt(pow(tmpX, 2) + pow(tmpY, 2));
	nTheta = acos(tmpX / nRho);
	if (tmpY < 0)
		nTheta *= -1;
}

/*
BUT : effectuer une homothetie du point
PRINCIPE : on multiplie les donn�es membres nX et nY avec une valeur b;
ENTREE : le point et la valeur de multiplication
SORTIE : le point avec ses coordonn�es modifi�es
*/

void CPoint::homothetie(float b)
{
	float tmpX = getX() * b;
	float tmpY = getY() * b;

	nRho = sqrt(pow(tmpX, 2) + pow(tmpY, 2));
	nTheta = acos(tmpX / nRho);
	if (tmpY < 0)
		nTheta *= -1;
}

/*
BUT : d�placer les coordonn�es du point
PRINCIPE : on additionne les valeurs en argument avec donn�es membres nX et nY;
ENTREE : le point et les valeurs � ajouter � ses coordonn�es
SORTIE : le point avec ses coordonn�es modifi�es
*/

void CPoint::deplace(float nbX, float nbY)
{
	float tmpX = getX() + nbX;
	float tmpY = getY() + nbX;

	nRho = sqrt(pow(tmpX, 2) + pow(tmpY, 2));
	nTheta = acos(tmpX / nRho);
	if (tmpY < 0)
		nTheta *= -1;
}

/*
BUT : renvoyer la valeur de nX
PRINCIPE : on renvoie la donn�e membre priv�e nX par encapsulation de donn�e;
ENTREE : le point
SORTIE : la valeur nX du point
*/

float CPoint::getX()
{
	return nRho * cos(nTheta);
}

/*
BUT : renvoyer la valeur de nY
PRINCIPE : on renvoie la donn�e membre priv�e nY par encapsulation de donn�e;
ENTREE : le point
SORTIE : la valeur nY du point
*/

float CPoint::getY()
{
	return nRho * sin(nTheta);
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
	nRho = sqrt(pow(nbX, 2) + pow(nbY, 2));
	nTheta = acos(nbX / nRho);
	if (nbY < 0)
		nTheta *= -1;
}

//destructeur
CPoint::~CPoint()
{
}
