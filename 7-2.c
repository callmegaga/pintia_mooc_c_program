#include <stdio.h>

int main() {
	const char message[] = "I Love GPLT";
	for (int i = 0; i < sizeof(message) / sizeof(char); i++) {
		printf("%c\n", message[i]);
	}
	return 0;
}