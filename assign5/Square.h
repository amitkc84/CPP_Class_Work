//File Name :	Square.h
//Description :	Square Class definition.

#ifndef SQUARE_H
#define SQUARE_H 

#include <string>

#include "Shape.h"

class Square : public Shape {
	private:
		double sidelength;
	public:
		Square(std::string& color_IP,double sidelength_IP); //Constructor
		double area();
		std::string toString();	
		~Square(); // Destructor.
};

#endif
