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
	modInt a(3, &addOne);
	int t1 = a * a;
	int t2 = 1 * a;

	cout << a;

	cin.get();
    return 0;
}

