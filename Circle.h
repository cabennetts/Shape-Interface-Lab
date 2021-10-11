#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include <string>

class Circle:public Shape{

    private:
        double m_radius;
        std::string m_shapeName;

    public:
        /**
		* @pre 
		* @post sets m_shapeName, m_radius to corresponding values
        * @param shapeName, radius
		* @throw 
	    **/ 
       Circle(std::string shapeName, double radius);
        /**
		* @pre 
		* @post returns area of circle
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