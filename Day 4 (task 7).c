#include <stdio.h>

int main()
{
	float a, b, c, d, e, f, g, equation = 0;
	scanf("%f%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f, &g);
	equation = ((a + ((b / c) * d) - e) * (f - g));
	printf("The Equation = %f\n", equation);
}