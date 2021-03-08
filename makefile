all:adder  yukuri test

yukuri: yukuri.cpp
	g++ -Wall -o yukuri yukuri.cpp

test: test.cpp
	g++ -Wall -o  test test.cpp

adder: main.o func.o
	g++ -Wall -o adder main.o func.o 

main.o:main.cpp
	g++ main.cpp -c

func.o:func.cpp
	g++ func.cpp -c

erase:
	rm *.o
