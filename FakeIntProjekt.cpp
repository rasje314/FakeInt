// FakeIntProjekt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "modInt.h"

using namespace std;

int addOne(int a)
{
	return a + 1;
}

int main()
{
	modInt a(3);
	modInt b(3, &addOne);

	cout << a << endl << b;

	cin.get();
    return 0;
}

