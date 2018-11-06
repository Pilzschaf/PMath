CXX = g++ -g -Wall -std=c++11

all: compile clean

compile:
	$(CXX) main.cpp

clean:
	rm -f *.o

run:
	./a.out