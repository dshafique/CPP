#ifndef POINT2D_H_
#define POINT2D_H_

#include <iostream>
#include <string>

class Point2D
{

public:
	Point2D();
	Point2D(double X, double Y);
	Point2D(const Point2D& other);
	
	void setX(double X);
	void setY(double Y);
	void setPoint(double X, double Y);
	double distanceToOrigin();
	double getX();
	double getY();
	void getPoint(double &X, double &Y);
	
	friend std::ostream& operator<< (std::ostream& os, const Point2D& rectangle);
	friend std::istream& operator>> (std::istream& is, Point2D& rectangle);

private:
	double x;
	double y;
};
#endif 

