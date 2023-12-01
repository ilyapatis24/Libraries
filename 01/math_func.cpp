#include "math_func.h"
#include <math.h>

typedef long long ll;

int addition(int a, int b) {
	return a + b;
}

int subtraction(int a, int b) {
	return a - b;
}

int multiplication(int a, int b) {
	return a * b;
}

double division(int a, int b) {
	return static_cast<double>(a) / b;
}

 ll exponentiation(int a, int b) {
	 return pow(a, b);
}
