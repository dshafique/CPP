#include "Point3D.h"



Point3D::Point3D()
{
}

Point3D::Point3D(double X, double Y, double Z)
{
	setX(X);
	setY(Y);
	setZ(Z);
}

Point3D::Point3D(const Point3D& other) : Point2D(other)
{
	setZ(other.z);
}

void Point3D::setZ(double Z)
{
	z = Z;
}

double Point3D::getZ()
{
	return 0.0;
}

void Point3D::setPoint(double X, double Y, double Z)
{
	setX(X);
	setY(Y);
	setZ(Z);
}

void Point3D::getPoint(double &X, double &Y, double &Z)
{
	X = getX();
	Y = getY();
	Z = getZ();
}

double Point3D::distanceToOrigin()
{
	return sqrt(pow(getX(), 2) + pow(getY(), 2) + pow(getZ(), 2));
}
