#include "circle.h"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle()
{

};

Circle::Circle(double a)
{
    this->Radius = a;
};

double Circle::Sq()
{
    Square = 3.14 * pow(Radius, 2);
    return Square;
}

double Circle::Len()
{
    Length = 2 * 3.14 * Radius;
    return Length;
}

void Circle::SetRadius(double a)
{
    this->Radius = a;
}

void Circle::PrintRadius()
{
    cout << "������ ����� " << Radius << endl;
}

void Circle::PrintSquare()
{
    cout << "������� ����� " << Square << endl;
}

void Circle::PrintLength()
{
    cout << "����� ���������� ����� " << Length << endl;
}