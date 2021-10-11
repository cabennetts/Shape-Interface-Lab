#ifndef SHAPECONTAINER_H
#define SHAPECONTAINER_H
#include "Shape.h"
#include <stdexcept>

class ShapeContainer{

    public:
        /**
		* @pre 
		* @post initializes pointer in m_arrayOfShapes to nullptr
        * @param
		* @throw 
	    **/ 
       ShapeContainer(int size);
        /**
		* @pre 
		* @post deletes pointers in array
        * @param
		* @throw 
	    **/ 
       ~ShapeContainer();
        /**
		* @pre 
		* @post returns area of object contained in specific index 
        * @param index of shape
		* @throw std::runtime_error if index is invalid
	    **/ 
       double area(int index) const;
        /**
		* @pre 
		* @post returns shape name at specific index 
        * @param index of shape
		* @throw std::runtime_error if invalid index
	    **/ 
       std::string shapeName(int index) const;
        /**
		* @pre 
		* @post adds shape object to array at index
        * @param type of shape and index    
		* @throw std::runtime_error if invalid index
	    **/ 
       void add(Shape* shapePtr, int index);
        /**
		* @pre 
		* @post removes shape obj from array at specific index
        * @param index of shape
		* @throw std::runtime_error if index invalid 
	    **/ 
       void remove(int index);

    private: 
        Shape** m_arrayOfShapes;
        int m_size;

};
#endif