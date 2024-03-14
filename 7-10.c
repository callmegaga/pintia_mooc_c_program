#include <stdio.h>

int main() {
	int a, b;
	if (scanf("%d %d", &a, &b)) {
		printf("%d + %d = %d\n", a, b, a + b);
		printf("%d - %d = %d\n", a, b, a - b);
		printf("%d * %d = %d\n", a, b, a * b);
		if (a % b) {
			printf("%d / %d = %.2f\n", a, b, a / (float) b);
		} else {
			printf("%d / %d = %d\n", a, b, a / b);
		}
		return 0;
	} else {
		return 1;
	}
}