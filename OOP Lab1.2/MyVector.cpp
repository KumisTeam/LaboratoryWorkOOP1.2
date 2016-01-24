#include "stdafx.h"
#include "MeVector.h"

//Constructor
MyVector::MyVector(float a, float b)
{
	this->x = a;
	this->y = b;
}

//Function to find distance between A(x, y) and O(0, 0)
void MyVector::Distance()
{
	std::cout << "The distanse is:"
		<< sqrt(pow(x, 2) + pow(y, 2))
		<< std::endl;
}

//Funstion to find angle between the vector and OY
void MyVector::Angle()
{
	std::cout << "The angle is:"
		<< acos(y / (sqrt(sqrt(pow(x, 2) + pow(y, 2)))))
		<< std::endl;
}

//Function to draw the vector throught screen
void BuildVector(MyVector object)
{

}