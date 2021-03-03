#include <iostream>

#include "Vector.h" 

template<typename T>
void PrintVector(const Vector<T>& vector)
{
    for (size_t i = 0; i < vector.Size(); i++)
        std::cout << vector[i] << std::endl;

    std::cout << "---------------------------" << std::endl;
}

int main()
{
    Vector<std::string> vector;
    vector.PushBack("Hello");
    vector.PushBack("World");
    vector.PushBack(" !");
    
    PrintVector(vector);

    std::cin.get();
}
