#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

class Circle
{
private:
    double Radius = 0;
    double Square = 0;
    double Length = 0;

public:

    Circle();

    Circle(double a);

    double Sq();

    double Len();

    void SetRadius(double a);

    void PrintRadius();

    void PrintSquare();

    void PrintLength();

};


#endif
