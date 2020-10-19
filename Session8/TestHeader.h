//#ifndef TEST_HEADER
//#define TEST_HEADER
#pragma once

#include <iostream>
#include <cmath>

//int num1 = 0;
//int num2 = 0;
//double avg = 0.0;

struct Calc
{
public:
	Calc();
	~Calc();
	int a;
	int b;
	double calcSqrt(int, int);
};



void PrintData(std::string&);
void PrintData(std::string& stringToPrint);

//#endif // !TEST_HEADER