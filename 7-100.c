#include <stdio.h>
#include <stdbool.h>

int main() {
	char input[3];
	bool is_head_zero = true;
	scanf("%3s", input);
	for (int i = 2; i >= 0; i--) {
		if (input[i] == '0' && is_head_zero) {
			continue;
		}
		is_head_zero = false;
		printf("%c", input[i]);
	}
	return 0;
}