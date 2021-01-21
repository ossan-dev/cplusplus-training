// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define PRINT_JOE // object-like macro without text substitution

void printDouble(int value); // forward declaration of printDouble() using function prototype
int add(int x, int y);

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
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
