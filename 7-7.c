#include <stdio.h>

int main() {
	int output;
	double input;
	scanf("%lf", &input);
	output = (int) (5 * (input - 32) / 9);
	printf("Celsius = %d", output);
	return 0;
}