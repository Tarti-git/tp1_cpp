#include "Point.h"

int main()
{
	Point MonPoint(2, 4);
	MonPoint.affiche();
	MonPoint.deplace(1, 1);
	MonPoint.affiche();
}