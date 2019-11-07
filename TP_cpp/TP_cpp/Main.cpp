#include "Point.h"

int main()
{
	CPoint MonPoint(2, 4);
	//MonPoint.affiche();
	std::cout << "[" << MonPoint.getX() << ":" << MonPoint.getY() << "]\n";
	MonPoint.deplace(1, 1);
	//MonPoint.affiche();
	std::cout << "[" << MonPoint.getX() << ":" << MonPoint.getY() << "]\n";
}