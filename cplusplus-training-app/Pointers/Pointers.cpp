#include <iostream>
#include <typeinfo>

int main()
{
    int x{ 5 };
    std::cout << x << '\n';
    std::cout << &x << '\n'; // &x is address-of operator. u can distinguish it from bitwise & operator as this is unary
    std::cout << *(&x) << '\n'; // deference operator (or indirection operator). parenthesis not required. also here the deference operator is unary compared to multplication that is binary

    //int *iPtr{}; // pointer to an int value
    //double *dPtr{}; // pointer to a double value

    int v{ 5 };
    int* ptr{ &v }; // initialize ptr with address of variable v

    std::cout << &v << '\n'; // print the address of variable v
    std::cout << ptr << '\n'; // print the address that ptr is holding

    int y{ 4 };
    std::cout << typeid(&y).name() << '\n';

    int value1{ 5 };
    int value2{ 7 };

    int* iPtr{};

    iPtr = &value1; // ptr point to value1
    std::cout << *iPtr << '\n'; // indirection operator. Gets value that iPtr is pointing to

    iPtr = &value2; // ptr now points to value2
    std::cout << *iPtr << '\n';

    return 0;
}