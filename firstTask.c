#include <stdio.h>
#include <math.h>

float f(float x) {
	    return exp(-fabs(x)) * sin(x);
}

float g(float x) {
	    return exp(-fabs(x)) * cos(x);
}

int main() {
    	float x;
	scanf("%f", &x);
	printf("f(x) = %f\ng(x) = %f", f(x), g(x));
	return 0;
}
