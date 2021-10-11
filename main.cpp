#include "exe.h"
#include "Shape.h"
#include "ShapeContainer.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]){
    try{
        exe Driver(argv[1]);
    }
    catch(char* err){
        std::cout << err << std::endl;
    }
    return(0);
}