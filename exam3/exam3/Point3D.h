#pragma once
#include "Point2D.h"
class Point3D : public Point2D
{
public:
	Point3D();
	Point3D(double, double, double);
	Point3D(const Point3D& other);

	void setZ(double Z);
	double getZ();
	void setPoint(double, double, double);
	void getPoint(double&, double&, double&);
	double distanceToOrigin();

private:
	double z;
};

