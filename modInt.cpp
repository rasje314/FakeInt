#include "stdafx.h"
#include "modInt.h"

modInt::modInt(int a, int(*b)(int))
{
	baseNumber = a;
	functionPtr = b;
}

ostream & operator<<(ostream &os, const modInt &mi)
{
	os << mi.functionPtr(mi.baseNumber);
	return os;
}
