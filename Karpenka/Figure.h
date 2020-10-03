#pragma once
#include <iostream>
#include <vector>
#include <cassert>

class Point
{
public:
    int x, y;
    Point() { x = 0; y = 0; }
    Point(int _x, int _y) : x(_x), y(_y) {}
};

std::ostream& operator<<(std::ostream os, const Point& p)
{
    return os << "P{ " << p.x << ", " << p.y << std::endl << " }";
}

class Figure : Point
{
public:
    std::vector<Figure> AllFigures;
    double GetSquare();

private:
    double GetSquareOfAllFigures(std::vector<Figure> vec)
    {
        for (Figure f : vec)
        {

        }
    }
};

