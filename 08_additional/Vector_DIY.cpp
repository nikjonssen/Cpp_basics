#include <iostream>
#include <stdexcept>
#include <string>
#include "Vector_DIY.h"

struct Vector3
{
	float x = 0.0f, y = 0.0f, z = 0.0f;
	Vector3() {};
	Vector3(float scalar)
		: x(scalar), y(scalar), z(scalar) {};
	Vector3(float a, float b, float c)
		: x(a), y(b), z(c) {};

	Vector3(const Vector3& other)
		: x(other.x), y(other.y), z(other.z)
	{
		std::cout << "Copied\n";
	};

	Vector3(Vector3&& other) noexcept
		: x(other.x), y(other.y), z(other.z)
	{
		std::cout << "Moved\n";
	};

	~Vector3()
	{
		std::cout << "Destroyed\n";
	};

	Vector3& operator=(const Vector3& other)
	{
		std::cout << "Copied\n";
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	};
	
	Vector3& operator=(Vector3&& other) noexcept
	{
		std::cout << "Moved\n";
		x = other.x;
		y = other.y;
		z = other.z;
		return *this;
	};
};

template<typename A>
void PrintVector(const Vector<A>& vector)
{
	for (size_t i = 0; i < vector.Size(); i++)
		std::cout << vector[i] << "\n";

	std::cout << "------------------------------\n";
}

template<>
void PrintVector(const Vector<Vector3>& vector)
{
	for (size_t i = 0; i < vector.Size(); i++)
		std::cout << vector[i].x << vector[i].y << vector[i].z << "\n";

	std::cout << "------------------------------\n";
}


int main()
{
	/*Vector<std::string> vctr;
	vctr.PushBack("Vector");
	vctr.PushBack("C++");
	vctr.PushBack("DIY");
	PrintVector(vctr);*/

	/*Vector<Vector3> vector;
	vector.PushBack(Vector3(1.0f));
	vector.PushBack(Vector3(2, 3, 4));
	vector.PushBack(Vector3());
	PrintVector(vector);*/

	/*Vector<Vector3> vector;
	vector.EmplaceBack(1.0f);
	vector.EmplaceBack(2, 3, 4);
	vector.EmplaceBack();
	PrintVector(vector);*/

	/*Vector<int> intVector;
	intVector.PushBack(5);
	intVector.EmplaceBack(2);
	intVector.EmplaceBack(2);
	intVector.EmplaceBack(2);
	intVector.EmplaceBack(2);
	PrintVector(intVector);
	intVector.PopBack();
	PrintVector(intVector);
	intVector.Clear();*/

	Vector<int> values;
	values.EmplaceBack(2);
	values.EmplaceBack(2);
	values.EmplaceBack(2);

	std::cout << "Loop without iterators: \n";
	for (int i = 0; i < values.Size(); i++)
	{
		std::cout << values[i] << "\n";
	};

	std::cout << "Range-based for loop: \n";
	for (int value : values)
		std::cout << value << "\n";

	std::cout << "Loop Using Iterator: \n";
	for (Vector<int>::Iterator i = values.begin(); i != values.end(); i++)
		std::cout << *i << "\n";


	Vector<std::string> strings;
	strings.EmplaceBack("text");
	strings.EmplaceBack("text");

	std::cout << "String Loop without iterators: \n";
	for (int i = 0; i < strings.Size(); i++)
	{
		std::cout << strings[i] << "\n";
	};

	std::cout << "Range-based for string loop: \n";
	for (auto& string : strings)
		std::cout << string << "\n";

	std::cout << "String loop Using Iterator: \n";
	for (Vector<std::string>::Iterator i = strings.begin(); i != strings.end(); i++)
		std::cout << *i << "\n";
}