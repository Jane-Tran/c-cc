#include <iostream>
#include "add.h"
#include "MathLibrary.h"

int main()
{
    std::cout <<"HelloWorld"<<"\n";
    std::cout << "The sum 5 and 6 " << MathLibrary::Arithmetic::Add(5,6) << "\n";
    std::cout << "The sub 5 and 6 " << MathLibrary::Arithmetic::Subtract(5,6) << "\n";
    std::cout << "The multi 5 and 6 " << MathLibrary::Arithmetic::Multiply(5,6) << "\n";
    std::cout << "The div 5 and 6 " << MathLibrary::Arithmetic::Divide(5,6) << "\n";
    return 0;
}
