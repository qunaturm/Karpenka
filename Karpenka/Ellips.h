#pragma once
#include <cassert>
#include "Figure.h"
#define M_PI 3.1415926535897932384

class Ellips : public Figure
{
public:
	Point p;
	int radius_1;
	int radius_2;
	Ellips()
	{
		radius_1 = 0;
		radius_1 = 0;
	}

	Ellips(int _x, int _y, int r1, int r2) : p(_x, _y), radius_1(r1), radius_2(r2)
	{
		assert(r1 > 0 && r2 > 0);
		AllFigures.push_back(*this);
	}

	double GetSquare() override 
	{
		return (M_PI * radius_1 * radius_2);
	}

	~Ellips()
	{
		Ellips();
	}
	
};

