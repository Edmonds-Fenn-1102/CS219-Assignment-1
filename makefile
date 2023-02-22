AssignmentOneFinal: driver.o
	g++ -o AssignmentOneFinal driver.o 
driver.o: driver.cpp 
	g++ -c driver.cpp
clean:
	rm *.o AssignmentOneFinal