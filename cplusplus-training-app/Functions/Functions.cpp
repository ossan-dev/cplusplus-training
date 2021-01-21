#include "Square.h"
#include "Geometry.h"

#include "Add.h" // inserts content of Add.h at this point
// this is the order to include header files: user-defined, third-party and system
#include <iostream>

#define PRINT_JOE // object-like macro without text substitution

void printDouble(int value); // forward declaration of printDouble() using function prototype
//int add(int x, int y);

int getValueFromUser() 
{
	std::cout << "Enter an integer: ";
	int userInput{};
	std::cin >> userInput;
	return userInput;
}

int main()
{
	int num{ getValueFromUser() }; // initialize variable with value provided by user through getValueFromUser()
	
	printDouble(num); // call the printDouble() and pass by value num as argument

	std::cout << "output of add() is: " << add(2, 3) << '\n';

#ifdef PRINT_JOE
	std::cout << "variable PRINT_JOE #defined\n";
#endif

#ifndef PRINT_BOB
	std::cout << "variable PRINT_BOB not #defined\n";
#endif // !PRINT_BOB


	return 0;
}

void printDouble(int value)
{
	std::cout << "The number " << value << " doubled is: " << value * 2 << '\n';
}