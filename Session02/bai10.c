#include <stdio.h>
#include <math.h>

int main() {
	
    		int a = 3, b = 4, c = 2;


    double S = sqrt(pow(a, 2) + pow(b, 2)) / (c + 1) + (double)(a * b) / c - sqrt(fabs(a - b) + pow(c, 2));

    printf("S = %.2lf\n", S);

    return 0;
}

