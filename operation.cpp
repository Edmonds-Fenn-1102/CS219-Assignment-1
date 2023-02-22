#include "operation.h"

Operation::Operation()
{
    operation = "ADD";
    firstEntry = 56;
    secondEntry = 77;
    total = 0;
}

Operation::Operation(string newOp, int newFirst, int newSecond, int newTotal)
{
    operation = newOp;
    firstEntry = newFirst;
    secondEntry = newSecond;
    total = newTotal;
}

const string Operation::getOperation()
{
    return operation;
}

const int Operation::getFirstEntry()
{
    return firstEntry;
}

const int Operation::getSecondEntry()
{
    return secondEntry;
}

const int Operation::getTotal()
{
    return total;
}

void Operation::setOperation(string newOp)
{
    operation = newOp;
}

void Operation::setFirstEntry(int newFEntry)
{
    firstEntry = newFEntry;
}

void Operation::setSecondEntry(int newSEntry)
{
    secondEntry = newSEntry;
}

void Operation::setTotal(int newTotal)
{
    total = newTotal;
}

void Operation::printOpAndNums()
{
    cout << operation << " " << firstEntry << " " << secondEntry << " " << "Total: " << total << endl;
}