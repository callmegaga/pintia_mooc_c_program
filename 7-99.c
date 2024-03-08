#include <stdio.h>

int main() {
	int input, multiplier = 1, multiplicand = 1;
	scanf("%d", &input);
	for (; multiplier <= input; multiplier++) {
		for (multiplicand = 1; multiplicand <= multiplier; multiplicand++) {
			printf("%d*%d=%-4d", multiplicand, multiplier, multiplier * multiplicand);
		}
		if (multiplier < input) {
			printf("\n");
		}
	}
	return 0;
}