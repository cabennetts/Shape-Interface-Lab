#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"
#include <string>

class Rectangle:public Shape{

    private:
        double m_length;
        double m_height;
        std::string m_shapeName;

    public:
        /**
		* @pre 
		* @post sets m_shapeName, m_length, m_width to corresponding values
        * @param shapeName, length, width
		* @throw 
	    **/ 
        Rectangle(std::string shapeName, double length, double width);
        /**
		* @pre 
		* @post calculates and returns area of shape (Rectangle)
        * @param
		* @throw 
	    **/ 
        double area() const;
        /**
		* @pre 
		* @post returns name of shape
        * @param
		* @throw 
	    **/ 
       std::string shapeName() const;
};
#endif