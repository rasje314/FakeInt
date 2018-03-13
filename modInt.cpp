#include "stdafx.h"
#include "modInt.h"

ostream & operator<<(ostream &os, const modInt &mi)
{
	if (mi.functionPtr == nullptr)
	{
		os << mi.baseNumber;
	}
	else
	{
		os << mi.functionPtr(mi.baseNumber);
	}
	return os;
}
