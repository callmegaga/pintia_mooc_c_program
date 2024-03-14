#include <stdio.h>

int main() {
	int height;
	if (scanf("%d", &height)) {
		float weight = (height - 100) * 0.9 * 2;
		printf("%.1f", weight);
		return 0;
	} else {
		return 1;
	};
}