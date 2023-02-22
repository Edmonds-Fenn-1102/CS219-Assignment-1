//
//Author: Fenn Edmonds
//Purpose: To implement the ADD function using c++ code
//Date: 2/20/2023
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int readFile(string);

int main(int argc, char* argv[])
{

    if (argc != 2){
      
        cout << "File was not found" << endl;

        return 0;
    }

    else{

    string numberList = "Programming-Project-1.txt";

    int hex = readFile(numberList);

    }


    return 0;
}

int readFile(string readList)
{
    ifstream inputFile;

    int i;
    int lineNumber = 0;

    string opToDo;
    uint32_t firstNum, secondNum, newNum;

    inputFile.open(readList);

    if(!inputFile)
    {
        cout << "File was not found" << endl;
        return -1;
    }
    
    while(inputFile >> opToDo >> hex >> firstNum >> secondNum)
    {
            if(opToDo == "ADD")
            {
                newNum = firstNum + secondNum;
                cout << opToDo << " 0x" << hex << firstNum << " 0x" << hex << secondNum << ": <0x" << newNum << ">" << endl;
            }
            if(secondNum > UINT32_MAX - firstNum)
            {
                cout << "Overflow: <yes>" << endl;
            }
            else
            {
                cout << "Overflow: <no>" << endl;
            }
    }
    return 1;
}