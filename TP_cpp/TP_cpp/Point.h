#pragma once
#include <iostream>

class Point
{
private:
	//Donn�es membres de la classe
	float nX;
	float nY;
public:
	void deplace(float nbX, float nbY);
	void affiche();
	//constructeur
	Point(float nbX, float nbY);
	//destructeur
	~Point();
};

