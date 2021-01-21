#include <iostream>

int getUserInput()
{
    std::cout << "Enter an integer ";
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    // get first number from user
    int value{ getUserInput() };
    std::cout << value;

    // get mathematical operation from user
    // getMathematicalOperation();

    // get second number from user
    // getUserInput();

    // calculate result
    // calculateResult();

    // print result
    // printResult();

    return 0;
}
