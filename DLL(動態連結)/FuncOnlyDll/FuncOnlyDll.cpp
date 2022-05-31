//FuncOnlyDll.cpp
#include"pch.h"
#include "FuncOnlyDll.h"

FUNCONLYDLL_API double Funcs::minValue(double a, double b)
{
	return a < b ? a : b;
}

FUNCONLYDLL_API double Funcs::maxValue(double a, double b)
{
	return a > b ? a : b;
}

FUNCONLYDLL_API double Funcs::add(double a, double b)
{
	return a + b;
}

FUNCONLYDLL_API double Funcs::subtract(double a, double b)
{
	return a - b;
}