#include "pch.h"
#include "TestDll.h"
#include <iostream>

TestDllSpace::TestDllClass::TestDllClass()
{
	a = 0;
}

TestDllSpace::TestDllClass::TestDllClass(double a_)
{
	a = a_;
}

TESTDLL_API double TestDllSpace::TestDllClass::multiply(double b)
{
	return a * b;
}

TESTDLL_API void TestDllSpace::TestDllClass::display()
{
	std::cout << "a=" << a << std::endl;
}

TESTDLL_API void TestDllSpace::TestDllClass::conbine(TestDllClass m1, TestDllClass m2)
{
	std::cout << "(" << m1.a << "," << m2.a << ")" << std::endl;
}