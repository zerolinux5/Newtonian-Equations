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
	rm electromagnetics newtonianMechanics supplimentaryFiles *.o

test: supplimentaryFiles.o
	g++ -o supplimentaryFiles supplimentaryFiles.o

supplimentaryFiles.o: supplimentaryFiles.cpp
	g++ -c supplimentaryFiles.cpp
