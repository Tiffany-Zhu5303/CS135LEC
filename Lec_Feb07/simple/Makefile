#This is a comment like in Python
#If you type in "make" in the terminal the top most target is run
#You can also specify by typing "make main" or "make help" etc

#main: rec.cpp
	#g++ -o main rec.cpp

#help:
	#echo "This is a help screen"
	#echo "You can make main"
	#echo "or make clean"
	#echo "or make help"

#chain: chain2 chain3
	#@echo "Chain was called"

#chain2: chain3
	#@echo "Chain2 was called"

#chain3:
	#@echo "Chain3 was called"
	#@ls

main: rec.o
	g++ -o rec rec.o

main.o: rec.cpp
	g++ -c rec.cpp

clean:
	rm rec.o

help:
	@echo "Targets: main"
	@echo "		clean"
	@echo "		help"
