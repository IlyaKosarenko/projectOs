#include <stdio.h>
#include <math.h>

float f(float x) {
	    return exp(-fabs(x)) * sin(x);
}

int main() {
	float x;
	scanf("%f", &x);
	printf("f(x) = %f\n", f(x));
	return 0;
}
