#include "exe.h"
#include "ShapeContainer.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>
#include <fstream>
#include <string>

exe::exe(std::string fileName){
    std::ifstream inFile;
    inFile.open(fileName);
    if(inFile.is_open()){
        Shape* ptr = nullptr;
        int size = 0;
        int index = 0;
        double rad = 0;
        std::string command = " ";
        std::string name = " ";
        double d1 = 0, d2 = 0;

        inFile >> size;
        ShapeContainer container(size);
        while (command != "EXIT"){
            inFile >> command;
            if(command == "ADD"){
                inFile >> index >> name;
                if(name == "CIR"){
                    inFile >> rad;
                    ptr = new Circle("Circle", rad);

                    try{
                        container.add(ptr, index);
                    }
                    catch(std::runtime_error e){
                        std::cout << e.what() << std::endl;
                    }

                }
                else if(name == "TRI"){
                    inFile >> d1 >> d2;
                    ptr = new Triangle("Triangle", d1, d2);

                    try{
                        container.add(ptr, index);
                    }
                    catch(std::runtime_error e){
                        std::cout << e.what() << std::endl;
                    }
                }
                else if(name == "REC"){
                    inFile >> d1 >> d2;
                    ptr = new Rectangle("Rectangle", d1, d2);

                    try{
                        container.add(ptr, index);
                    }
                    catch(std::runtime_error e){
                        std::cout << e.what() << std::endl;
                    }
                }

            }
            else if(command == "Delete"){
                inFile >> index;

                try{
                    container.remove(index);
                }
                catch(std::runtime_error e){
                    std::cout << e.what() << std::endl;
                }
            }
            else if (command == "PRINT"){
                inFile >> index;
                std::cout << "Shape at index " << index << ": ";

                try{
                    std::cout << container.shapeName(index) << " area = " << container.area(index) << std::endl;
                }
                catch(...){
                    std::cout << "Does not exist\n";
                }
            }
            else if(command == "EXIT"){
                std::cout << "Exiting.\n";
            }
        }
    }
    else{
        throw "File could not be opened!\n";
    }
}
