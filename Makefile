all: newtonianMechanics electromagnetics

newtonianMechanics: newtonianMechanics.o
	g++ -o newtonianMechanics newtonianMechanics.o

electromagnetics: electromagnetics.o
	g++ -o electromagnetics electromagnetics.cpp

newtonianMechanics.o: newtonianMechanics.cpp
	g++ -c newtonianMechanics.cpp

electomagnetics.o: electromagnetics.cpp
	g++ -c electromagnetics.cpp

clean:
	rm electromagnetics newtonianMechanics *.o
