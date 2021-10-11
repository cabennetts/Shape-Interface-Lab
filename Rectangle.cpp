#include "Shape.h"
#include "Rectangle.h"
#include <cmath>
#include <string>

Rectangle::Rectangle(std::string shapeName, double length, double height){
    m_shapeName = shapeName;
    m_length = length;
    m_height = height;
}

double Rectangle::area() const{
    return(m_length*m_height);
}

std::string Rectangle::shapeName() const{
    return(m_shapeName);
}