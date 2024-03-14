#include <stdio.h>

int main() {
	int a, b, c, d, sum;
	float avg;
	if (scanf("%d %d %d %d", &a, &b, &c, &d)) {
		sum = a + b + c + d;
		avg = sum / 4.0;
		printf("Sum = %d; Average = %.1f", sum, avg);
		return 0;
	} else {
		return 1;
	}
}