# CS219-Assignment-1
This is the first assignment for CS 219

# How to Execute
In order to run this program, one must open a terminal and both input the name of this program (AssignmentOneFinal) after a ./, then put a space, and lastly add the name of the text file it is reading from (Programming-Project-1). If both of these are not input correctly, the program will not run.

It should look like this: ./AssignmentOneFinal Programming-Project-1.txt

# Purpose
In this program, we are adding two hexdecimal numbers together, and detecting if they have any overflow. 

# Explanation
To start this program I include the necessary libraries at the top of my program needed to convert from decimal to hex, as well as storing strings.

The main of the program is then intitalized with an argument passed in (which is the text file we will be reading from), the program checks that the appropriate amount of arguments have been passed in, and if there isn't the correct amount, it ends the program and tells the user that they need to include the correct text file.

After this we call the function that I have name 'readFile' to read the inserted file. ReadFile is an int function with the only parameter being the textfile that we are passing in. Using the ifstream library, we declare that the file that we're about to use, then we declare the variables that will be storing the values we retrieve from the file, which is the string operation that will be performed, the two int hex values we will be reciving, and an int for the total value. 

After this, the file is opened and we declare that the file is going to be specifically read from, not edited in any way. If the file cannot be found, the function reports the error to the user using cout, and then ends there. However, if the file CAN be found, a while loop is declared where using the insertion operators, as long as their is material to store, first the operation is stored, and after using the hex keyword to detect numbers with '0x' in front of them, they store the first and second numbers in their respective variables.

An 'if' statment looks to see if the operation is equal to addition or 'ADD', if it is, then the next step is to add the two number storing variable together, and then putting that total into the previously declared variable to hold the final number. The program then couts the operation, uses the hex keyword to change the decimal back to hex, outputs the next two numbers in hex, and lastly output the final total in hex. 

After calculating all of that, it checks for overflow using an if statement in which the program looks for if the second readfile number is larger than the max of the 32 bit system minus the first readfile number. If it does detect that, it will cout that there is overflow, and if it detects nothing, then it will cout that there is no overflow. After this the function ends, and we return to main, where the program ends.