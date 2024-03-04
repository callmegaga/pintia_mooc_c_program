#include <stdio.h>

int main() {
	const char border[] = "************";
	const char message[] = "Welcome";
	printf("%s\n", border);
	printf("%9s\n", message);
	printf("%s", border);
	return 0;
}