
#include <iostream>
#include <cmath>
#include "TestHeader.h"


double Calc::calcSqrt(int num1, int num2)
{
	return sqrt(pow(num1, 2) + pow(num2, 2));
}

// constructor
Calc::Calc()
{

}

//deconstructor
Calc::~Calc()
{

}
void PrintData(std::string& stringToPrint){
	std::cout << "Message : " << stringToPrint;
}