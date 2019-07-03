/*
 * RectangleType.cpp
 *
 *  Created on: Nov 14, 2015
 *      Author: kmurashk
 */
#include <iostream>
#include "RectangleType.h"

RectangleType::RectangleType()
{
	// TODO Auto-generated constructor stub
	length = 0;
	width = 0;

}


RectangleType::~RectangleType() {
	// TODO Auto-generated destructor stub
}

RectangleType::RectangleType(double l, double w)
{
	length = l;
	width = w;
}
RectangleType::RectangleType(RectangleType& other)
{
	length = other.length;
	width = other.width;
}

void RectangleType::setDimension(double l, double w)
{
	length = l;
	width = w;
}

double RectangleType::getLength() const
{
	return length;
}
double RectangleType::getWidth() const
{
	return width;
}
double RectangleType::area() const
{
	return length*width;
}
double RectangleType::perimeter() const
{
	return 2 * (length + width);
}
void RectangleType::print() const
{
	std::cout << "Length = " << length << ", Width = " << width;
}
RectangleType operator+(const RectangleType& rectangle1, const RectangleType& rectangle)
{
	RectangleType temp;
	temp.length = rectangle1.length + rectangle.length;
	temp.width = rectangle1.width + rectangle.width;
	return temp;
}

RectangleType operator*(const RectangleType& rectangle1, const RectangleType& rectangle)
{
	RectangleType temp;
	temp.length = rectangle1.length * rectangle.length;
	temp.width = rectangle1.width  * rectangle.width;
	return temp;
}

RectangleType operator++(RectangleType& rectangle) //overloading pre-increment operator
{
	rectangle.length += 1.0;
	rectangle.width += 1.0;
	return rectangle;
}

RectangleType operator++(RectangleType& rectangle, int i) //overloading post-increment operator
{
	RectangleType temp = rectangle;
	rectangle.length = rectangle.length + 1.0;
	rectangle.width = rectangle.width + 1.0;
	return temp;
}
RectangleType operator--(RectangleType& rectangle) //overloading pre-decrement operator
{
	if (rectangle.length >= 0)
	{
		rectangle.length -= 1.0;
	}
	else
	{
		std::cout << "pre-decrement operator: not possible to decrement length";
	}
	if (rectangle.width >= 0)
	{
		rectangle.width -= 1.0;
	}
	else
	{
		std::cout << "pre-decrement operator: not possible to decrement width";
	}
	return rectangle;
}


RectangleType operator--(RectangleType& rectangle, int i) //overloading post-decrement operator
{

	RectangleType temp = rectangle;
	if (rectangle.length >= 0)
	{
		rectangle.length -= 1.0;
	}
	else
	{
		std::cout << "pre-decrement operator: not possible to decrement length";
	}
	if (rectangle.width >= 0)
	{
		rectangle.width -= 1.0;
	}
	else
	{
		std::cout << "pre-decrement operator: not possible to decrement width";
	}

	return temp;
}

RectangleType operator-(const RectangleType& rectangle1, const RectangleType& rectangle)
{
	RectangleType temp;
	RectangleType empty;
	if ((rectangle1.length - rectangle.length) >= 0.0)
	{
		temp.length = rectangle1.length - rectangle.length;
	}
	else
	{
		std::cout << "Impossible subtract of lengths ";
		return empty;
	}
	if ((rectangle1.width - rectangle.width) >= 0.0)
	{
		temp.width = rectangle1.width - rectangle.width;
	}
	else
	{
		std::cout << "Impossible subtract of widths ";
		return empty;
	}
	return temp;
}
bool operator==(const RectangleType& rectangle1, const RectangleType& rectangle)
{
	return rectangle1.area() == rectangle.area();
}

bool operator!=(const RectangleType& rectangle1, const RectangleType& rectangle)
{
	return rectangle1.area() != rectangle.area();
}

bool operator>=(const RectangleType& rectangle1, const RectangleType& rectangle)
{
	return rectangle1.area() >= rectangle.area();
}

bool operator<=(const RectangleType& rectangle1, const RectangleType& rectangle)
{
	return rectangle1.area() <= rectangle.area();
}

bool operator>(const RectangleType& rectangle1, const RectangleType& rectangle)
{
	return rectangle1.area() > rectangle.area();
}

bool operator<(const RectangleType& rectangle1, const RectangleType& rectangle)
{
	return rectangle1.area() < rectangle.area();
}

std::ostream& operator<< (std::ostream& os, const RectangleType& rectangle)
{
	os << "Length = " << rectangle.length
		<< ", Width = " << rectangle.width;
	return os;
}
std::istream& operator>> (std::istream& is, RectangleType& rectangle)
{
	is >> rectangle.length >> rectangle.width;
	return is;
}

/*
RectangleType operator(const RectangleType& firstRect, const RectangleType& secondRect)
{
	RectangleType tempRect;

	tempRect.getLength= firstRect.getLength + secondRect.getLength;
	tempRect.getWidth = firstRect.getWidth + secondRect.getWidth;

	return tempRect;
}
*/