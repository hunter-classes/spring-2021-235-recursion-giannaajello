CXXFLAGS = --std=c++11
CXX=g++
CXXFLAGS=-g -Wall -MMD -std=c++11
main: main.o Knights.o
	g++ -o main main.o Knights.o

main.p: main.cpp Knights.h

Knights.o: Knights.cpp Knights.h

clean:
	rm -f main.o Knights.o
