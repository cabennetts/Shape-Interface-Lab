#include "ShapeContainer.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include <iostream>
#include <fstream>
#include <string>

ShapeContainer::ShapeContainer(int size){
    m_size = size;
    m_arrayOfShapes = new Shape*[size];
    for(int i=0; i<size; i++){
        m_arrayOfShapes[i] = nullptr;
    }
} 

ShapeContainer::~ShapeContainer(){
    for(int i=0; i<m_size; i++){
        delete m_arrayOfShapes[i];
    }
    delete[] m_arrayOfShapes;
}

double ShapeContainer::area(int index) const{
    if(index<0 || index>=m_size || m_arrayOfShapes[index]==nullptr){
        throw std::runtime_error("Does not exist\n");
    }
    else{
        return(m_arrayOfShapes[index]->area());
    }
}

std::string ShapeContainer::shapeName(int index) const{
    if(index<0 || index>=m_size || m_arrayOfShapes[index]==nullptr){
        throw std::runtime_error("Does not exist\n");
    }
    else{
        return(m_arrayOfShapes[index]->shapeName());
    }
}

void ShapeContainer::add(Shape* shapePtr, int index){
    if(index<0 || index>=m_size || shapePtr==nullptr){
        throw std::runtime_error("Index or object does not exist\n");
    }
    else{
        m_arrayOfShapes[index] = shapePtr;
    }
}

void ShapeContainer::remove(int index){
    if(index<0 || index>=m_size || m_arrayOfShapes[index]==nullptr){
        throw std::runtime_error("Index or object does not exist\n");
    }
    else{
        delete m_arrayOfShapes[index];
        m_arrayOfShapes[index] = nullptr;
    }
}


