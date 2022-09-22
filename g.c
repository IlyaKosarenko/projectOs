#include <stdio.h>
#include <math.h>

float g(float x) {
	    return exp(-fabs(x)) * cos(x);
}

int main() {
	    float x;
	        scanf("%f", &x);
		    printf("g(x) = %f\n", g(x));
		        return 0;
}
