#include "Point.h"

int main()
{
	CPoint MonPoint(2, 4);
	CPoint MonPoint2(2, 4);
	CPoint MonPoint3(2, 4);
	CPoint MonPoint4(2, 4);
	CPoint MonPoint5(2, 4);
	MonPoint.affiche();
	std::cout << "[" << MonPoint.getX() << ":" << MonPoint.getY() << "]\n";
	MonPoint.deplace(1, 1);
	//MonPoint.affiche();
	std::cout << "[" << MonPoint.getX() << ":" << MonPoint.getY() << "]\n";
	MonPoint.homothetie(2);
	std::cout << "[" << MonPoint.getX() << ":" << MonPoint.getY() << "]\n";
	MonPoint.rotation(180);
	std::cout << "[" << MonPoint.getX() << ":" << MonPoint.getY() << "]\n";
	std::cout << "rho = " << MonPoint.rho() << std::endl;
	std::cout << "theta = " << MonPoint.theta() << std::endl;
}