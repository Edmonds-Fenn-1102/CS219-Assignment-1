AssignmentOneFinal: driver.o operation.o
	g++ -o AssignmentOneFinal driver.o operation.o
driver.o: driver.cpp operation.h
	g++ -c driver.cpp
operation.o: operation.h operation.cpp
	g++ -c operation.cpp
clean:
	rm *.o AssignmentOneFinal