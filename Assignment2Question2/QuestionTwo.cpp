#include <iostream>
#include <stdio.h>

using namespace std;

float power(float base, int exponent) {
	if (exponent == 1)
		return base;
	else
		return base * (power(base,(exponent - 1)));
}

