#Make file

main: main.o
	g++ -o main -std=c++11 main.o

#.o files
main.o: main.cpp
	g++ -c -std=c++11 main.cpp

stringUtil.o: stringUtil.cpp
	g++ -c -std=c++11 stringUtil.cpp

# util
clean:
	rm -rf main.o tests.o stringUtil.o 
	rm -rf tests main a.out 
