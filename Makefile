lab2: main.o exe.o ShapeContainer.o Circle.o Rectangle.o Triangle.o
	g++ -std=c++11 -g -Wall main.o exe.o ShapeContainer.o Circle.o Rectangle.o Triangle.o -o lab2

main.o: main.cpp exe.h Shape.h ShapeContainer.h Circle.h Rectangle.h Triangle.h
	g++ -std=c++11 -g -Wall -c main.cpp

exe.o: exe.h Shape.h ShapeContainer.h Circle.h Rectangle.h Triangle.h exe.cpp
	g++ -std=c++11 -g -Wall -c exe.cpp

ShapeContainer.o: ShapeContainer.h exe.h Shape.h Circle.h Rectangle.h Triangle.h ShapeContainer.cpp
	g++ -std=c++11 -g -Wall -c ShapeContainer.cpp

Circle.o: Circle.h exe.h Shape.h ShapeContainer.h Triangle.h Rectangle.h Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp

Rectangle.o: Rectangle.h exe.h Shape.h ShapeContainer.h Triangle.h Circle.h Rectangle.cpp
	g++ -std=c++11 -g -Wall -c Rectangle.cpp

Triangle.o: Triangle.h exe.h Shape.h ShapeContainer.h Rectangle.h Circle.h Triangle.cpp
	g++ -std=c++11 -g -Wall -c Triangle.cpp

clean: 
	rm *.o lab2