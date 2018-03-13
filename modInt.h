#pragma once

#include <iostream>

using namespace std;

class modInt
{
public:
	modInt(int, int(*)(int));

	friend ostream& operator<<(ostream&, const modInt&);


private:
	int baseNumber;
	int(*functionPtr)(int);
};