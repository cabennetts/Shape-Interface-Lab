#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"
#include <string>

class Triangle:public Shape {

    private:
        double m_base;
        double m_height;
        std::string m_shapeName;

    public:
        /**
		* @pre None
		* @post sets m_shapeName, m_height, and m_base to their respective values passed in
		* @param shapeName, base, and height
		* @throw None
	    **/
        Triangle(std::string shapeName, double base, double height);
         /**
		* @pre 
		* @post returns area of triangle
        * @param
		* @throw 
	    **/       
       double area() const; // returns area of shape (triangle)
        /**
		* @pre 
		* @post returns name of shape
        * @param
		* @throw 
	    **/      
       std::string shapeName() const; //returns name of the shape


};
#endif