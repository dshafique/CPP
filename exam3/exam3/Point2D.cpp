#include <iostream>
#include <cmath>
#include<string>
#include "Point2D.h"

using namespace std;

Point2D::Point2D()
{
	x = 0;
	y = 0;
}
Point2D::Point2D(double X, double Y)
{
	x = X;
	y = Y;
}

Point2D::Point2D(const Point2D& other)
{
	x = other.x;
	y = other.y;
}
void Point2D::setX(double X)
{
	x = X;
}

void Point2D::setY(double Y)
{
	y = Y;
}

void Point2D::setPoint(double X, double Y)
{
	x = X;
	y = Y;
}

double Point2D::getX()
{
	return x;
}

double Point2D::getY()
{
	return y;
}

void Point2D::getPoint(double &X, double &Y)
{
	X = x;
	Y = y;
}

double Point2D::distanceToOrigin()
{
	double distance = sqrt(pow(x, 2) + pow(y, 2));
	return distance;
}

std::ostream& operator<< (std::ostream& os, const Point2D& point)
{
	os << "x = " << point.x
		<< ", y = " << point.y;
	return os;
}
std::istream& operator>> (std::istream& is, Point2D& point)
{
	is >> point.x >> point.y;
	return is;
}