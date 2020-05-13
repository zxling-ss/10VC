#include "stdafx.h"
#include"w32.h"


//¼ÆËãn½×³Ë
int factorial(int n) {
	int a = 1;
	for (int i = 1; i <=n; i++) {
		a *= i;
	}
	return a;
}
float FAC::convert(float deg) {
	float result = 0;

	result = deg/180 * pi;

	return result;
}
 FAC::FAC() {
	
}