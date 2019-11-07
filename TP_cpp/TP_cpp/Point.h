#pragma once
#include <iostream>

class CPoint
{
private:
	//Données membres de la classe
	float nX;
	float nY;
public:
	void deplace(float nbX, float nbY);
	float getX();
	float getY();
	//void affiche();
	//constructeur
	CPoint(float nbX, float nbY);
	//destructeur
	~CPoint();
};

