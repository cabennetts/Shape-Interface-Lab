#include "Shape.h"
#include "Circle.h"
#include <string>
#include <math.h>

Circle::Circle(std::string shapeName, double radius){

    m_shapeName = shapeName;
    m_radius = radius;
}

double Circle::area() const{
    double total = m_radius*m_radius;
    total = (M_PI)*total;
    return(total);
}

std::string Circle::shapeName() const{
    return(m_shapeName);
}