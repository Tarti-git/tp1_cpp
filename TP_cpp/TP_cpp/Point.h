#pragma once
#include <iostream>
#include <math.h>
#include <cmath>

#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

class CPoint
{
private:
	//Données membres de la classe
	float nRho;
	float nTheta;
	static int nbPoint;
public:
	float rho();
	float theta();
	void rotation(float b);
	void homothetie(float b);
	void deplace(float nbX, float nbY);
	float getX();
	float getY();
	void affiche();
	//constructeur
	CPoint(float nbX, float nbY);
	//destructeur
	~CPoint();
};

