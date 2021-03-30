#include <iostream>

#include "Vector.h"


struct Vector3
{
    float x = 0.0f, y = 0.0f, z = 0.0f;

    Vector3(){}
    Vector3(float scalar)
        :x(scalar), y(scalar), z(scalar){}
    Vector3(float x, float y, float z)
        :x(x), y(y), z(z){}
    
    Vector3(const Vector3& other)
        :x(other.x), y(other.y), z(other.z) 
    {
        std::cout << "Copy\n";
    }

    Vector3(Vector3&& other) noexcept
        :x(other.x), y(other.y), z(other.z)  
    {
        std::cout << "Move\n";
    }

    ~Vector3()
    {
        std::cout << "Destroy\n";
    }

    Vector3& operator=(const Vector3& other)
    {
        std::cout << "Copy\n";
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }

    Vector3& operator=(Vector3&& other) noexcept
    {
        std::cout << "Move\n";
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }
};

template<typename T>
void PrintVector(const Vector<T>& vector)
{
    for (size_t i = 0; i < vector.Size(); i++)
        std::cout << vector[i] << std::endl;

    std::cout << "---------------------------" << std::endl;
}

template<>
void PrintVector(const Vector<Vector3>& vector)
{
    for (size_t i = 0; i < vector.Size(); i++)
        std::cout << vector[i].x  << ", " << vector[i].y  << ", " << vector[i].z << std::endl;

    std::cout << "---------------------------" << std::endl;
}

int main()
{
    Vector<Vector3> vector;
    vector.PushBack(Vector3(1.0f));
    vector.PushBack(Vector3(1, 2, 3));
    vector.PushBack(Vector3());
    
    PrintVector(vector);

    std::cin.get();
}
