#pragma once

#include <iostream>

using namespace std;

class modInt
{
public:
	modInt(int a, int(*b)(int) = nullptr)
	{
		baseNumber = a;
		functionPtr = b;
	}

	friend ostream& operator<<(ostream&, const modInt&);


private:
	int baseNumber;
	int(*functionPtr)(int);
};