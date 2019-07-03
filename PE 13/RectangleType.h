/*
 * RectangleType.h
 *
 *  Created on: Nov 14, 2015
 *      Author: kmurashk
 */

#ifndef RECTANGLETYPE_H_
#define RECTANGLETYPE_H_
#include <iostream>

class RectangleType
{
protected:
	double length;
	double width;

public:
	RectangleType();
	RectangleType(double l, double w);
	RectangleType(RectangleType& other);
	virtual ~RectangleType();
	void setDimension(double l, double w);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;
	void print() const;

	friend RectangleType operator+(const RectangleType& rectangle1, const RectangleType& rectangle);
	friend RectangleType operator++(RectangleType& rectangle);    //overloading pre-increment operator
	friend RectangleType operator++(RectangleType& rectangle, int i); //overloading post-increment operator
	friend RectangleType operator--(RectangleType& rectangle);    //overloading pre-decrement operator
	friend RectangleType operator--(RectangleType& rectangle, int i); //overloading post-decrement operator
	friend RectangleType operator*(const RectangleType& rectangle1, const RectangleType& rectangle);
	friend RectangleType operator-(const RectangleType& rectangle1, const RectangleType& rectangle);
	friend bool operator==(const RectangleType& rectangle1, const RectangleType& rectangle);
	friend bool operator!=(const RectangleType& rectangle1, const RectangleType& rectangle);
	friend bool operator>=(const RectangleType& rectangle1, const RectangleType& rectangle);
	friend bool operator<=(const RectangleType& rectangle1, const RectangleType& rectangle);
	friend bool operator>(const RectangleType& rectangle1, const RectangleType& rectangle);
	friend bool operator<(const RectangleType& rectangle1, const RectangleType& rectangle);


	friend std::ostream& operator<< (std::ostream& os, const RectangleType& rectangle);
	friend std::istream& operator>> (std::istream& is, RectangleType& rectangle);

};

#endif /* RECTANGLETYPE_H_ */
