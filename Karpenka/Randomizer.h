#pragma once
#include "Figure.h"
#include <random>
#include <cmath>
#include <memory>
#include <typeinfo>
#include <algorithm>

using PFigure = std::shared_ptr<Figure>; 

class Randomizer
{
	enum share_t{circle_t, ellips_t};
	static std::random_device rd;
	std::uniform_real_distribution<double> urd{ -10, 10 };
	std::uniform_int_distribution<> uid { circle_t, ellips_t };

public:
	PFigure circle()
	{

	}
};

