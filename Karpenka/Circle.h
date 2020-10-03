#pragma once
#define M_PI 3.1415926535897932384

class Circle : public Figure
{
private:
    Point p; //координаты центра круга
    int radius;

public:
    Circle()
    {
        radius = 0;
    }

    Circle(int _x, int _y, int _r) : p(_x, _y), radius(_r)
    {
        assert(_r > 0);
        AllFigures.push_back(*this);
    }

    double  GetSquare() override
    {
        return (M_PI*radius*radius);
    }

    ~Circle()
    {
        Circle();
    }
};

