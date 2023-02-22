#ifndef OPERATION_H
#define OPERATION_H

#include <iostream>
#include <fstream>

using namespace std;

class Operation{

    string operation;
    int firstEntry;
    int secondEntry;
    int total = 0;

    public:

    Operation();
    Operation(string, int, int, int);

    const string getOperation();
    const int getFirstEntry();
    const int getSecondEntry();
    const int getTotal();

    void setOperation(string);
    void setFirstEntry(int);
    void setSecondEntry(int);
    void setTotal(int);

    void printOpAndNums();


};
#endif