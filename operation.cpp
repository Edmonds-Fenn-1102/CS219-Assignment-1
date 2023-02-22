#include "operation.h"

Operation::Operation()
{
    operation = "ADD";
    firstEntry = 56;
    secondEntry = 77;
    total = 0;
    overflow = false;
}

Operation::Operation(string newOp, int newFirst, int newSecond, int newTotal, bool newOver)
{
    operation = newOp;
    firstEntry = newFirst;
    secondEntry = newSecond;
    total = newTotal;
    overflow = newOver;
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

const bool Operation::getOverflow()
{
    return overflow;
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

void Operation::setOverflow(bool newOver)
{
    overflow = newOver;
}

void Operation::printOpAndNums()
{
    cout << operation << " 0x" << hex << firstEntry << " 0x" << secondEntry << " " << "Total: 0x" << total << endl;
    if(overflow = true)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        cout << "No Overflow" << endl;
    }
}