#include <stdio.h>

int main() {
	int number_a, number_b;
	char operation;
	scanf("%d %c %d", &number_a, &operation, &number_b);
	int error = 0;
	int result;

	switch (operation) {
		case '+':
			result = number_a + number_b;
			break;
		case '-':
			result = number_a - number_b;
			break;
		case '*':
			result = number_a * number_b;
			break;
		case '/':
			result = number_a / number_b;
			break;
		case '%':
			result = number_a % number_b;
			break;
		default:
			error = 1;
			break;
	}

	if (error) {
		printf("ERROR");
	} else {
		printf("%d", result)	;
	}
}