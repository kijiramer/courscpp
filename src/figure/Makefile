all: main

main : figure.o rectangle.o triangle.o main.o 
	g++ figure.o rectangle.o triangle.o main.o -o exe

figure.o : figure.cpp
	g++ -c figure.cpp

rectangle.o : rectangle.cpp
	g++ -c rectangle.cpp

triangle.o : triangle.cpp
	g++ -c triangle.cpp

main.o : main.cpp
	g++ -c main.cpp

clean :
	rm -f *.o exe
