#include <stdio.h>

int main() {
	double input;
	scanf("%lf", &input);
	double diff = input - 1600;
	diff = diff < 0 ? 0 : diff;
	double ratio;

	if (input <= 1600) {
		ratio = 0.0;
	} else if (input <= 2500) {
		ratio = 0.05;
	} else if (input <= 3500) {
		ratio = 0.1;
	} else if (input <= 4500) {
		ratio = 0.15;
	} else {
		ratio = 0.2;
	}

	printf("%.2f", diff * ratio);
	return 0;
}