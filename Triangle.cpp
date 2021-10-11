#include "Shape.h"
#include "Triangle.h"
#include <string>
#include <math.h>

Triangle::Triangle(std::string shapeName, double base, double height){
    m_shapeName = shapeName;
    m_base = base;
    m_height = height;
}

double Triangle::area() const{
    return(m_base*m_height);
}

std::string Triangle::shapeName() const{
    return(m_shapeName);
}
