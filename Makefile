#Makefile Patrick Ging

main: main.o stringUtil.o
	g++ -o main -std=c++11 main.o stringUtil.o

unIndent: unIndent.o stringUtil.o
	g++ -o unIndent -std=c++11 unIndent.o stringUtil.o

#.o files
main.o: main.cpp stringUtil.h
	g++ -c -std=c++11 main.cpp 

unIndent.o: unIndent.cpp stringUtil.h
	g++ -c -std=c++11 unIndent.cpp

stringUtil.o: stringUtil.cpp
	g++ -c -std=c++11 stringUtil.cpp

# util
clean:
	rm -f main.o tests.o stringUtil.o unIndent.o main unIndent a.out output.cpp
