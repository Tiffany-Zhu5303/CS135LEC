#Object = variable
OBJECTS=main.o utils.o adders.o 
CXX=g++
#turn on all the warnings
CXXFLAGS=-Wall
#if you need a library or some debugging code
LDFLAGS=-lm

main: main.o utils.o adders.o
	$(CXX) $(CXXFLAGS)  $(LDFLAGS) -o main $(OBJECTS)

main.o: main.cpp utils.h adders.h
	g++ $(CXXFLAGS) -c main.cpp

adders.o: adders.cpp adders.h
	g++ $(CXXFLAGS) -c adders.cpp

utils.o: utils.cpp utils.h adders.h
	g++ $(CXXFLAGS) -c utils.cpp
clean:
	rm -f $(OBJECTS)
help:
	@echo "Targets:"
	@echo " main"
	@echo " clean"
	@echo " help"

#g++ -- MM gives all the dependencies that you can paste into the Makefile
