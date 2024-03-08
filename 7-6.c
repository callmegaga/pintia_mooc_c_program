#include <stdio.h>

const double friction = 0.3048;

double cmToM(int);

int main(int argc, char *argv[]) {
	int input, inch, foot;
	scanf("%d", &input);
	double input_m = cmToM(input);
	foot = (int) (input_m / friction);
	inch = (int) ((input_m / friction - foot) * 12);
	printf("%d %d\n", foot, inch);
	return 0;
}

double cmToM(int input) {
	return input / 100.0;
}
