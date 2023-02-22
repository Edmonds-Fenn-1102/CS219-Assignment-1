//
//Author: Fenn Edmonds
//Purpose: To implement the ADD function using c++ code
//Date: 2/20/2023
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "operation.h"

int readFile(Operation[], string);

//function declaration for adding hex numbers together
void addFunction(Operation[], int);

int main(int argc, char* argv[])
{

    if (argc != 2){
      
        cout << "File was not found" << endl;

        return 0;
    }

    int lineNum = 0;

    string numberList = argv[1];

    Operation lineReader[100];


   lineNum = readFile(lineReader, numberList);

    for(int i = 0; i < 5; i++)
    {
        lineReader[i].printOpAndNums();
    }


    return 0;
}

int readFile(Operation lineReader[], string readList)
{
    ifstream inputFile;

    int i;
    int lineNumber = 0;

    string opToDo;
    int firstNum;
    int secondNum;

    inputFile.open(readList);

    if(!inputFile)
    {
        cout << "File was not found" << endl;
        return -1;
    }
    
    while(inputFile >> opToDo >> hex >> firstNum >> hex >> secondNum)
    {
        lineReader[lineNumber].setOperation(opToDo);
        lineReader[lineNumber].setFirstEntry(firstNum);
        lineReader[lineNumber].setSecondEntry(secondNum);
        lineNumber++;
    }

    addFunction(lineReader, lineNumber);
    
    return lineNumber;
}

void addFunction(Operation opArray[], int lineCount)
{

    int firstNum;
    int secondNum;
    int finalTotal;

    for(int i = 0; i< lineCount; i++)
    {
        firstNum = opArray[i].getFirstEntry();
        secondNum = opArray[i].getSecondEntry();
        finalTotal = firstNum + secondNum;
        opArray[i].setTotal(finalTotal);
    }
}