#include <stdio.h>

const char OP_ADD = '+';
const char OP_SUB = '-';
const char OP_MUL = '*';
const char OP_DIV = '/';
const char OP_NULL = 'n';

const int SIZE = 100;

int main() {
	int result = 0;
	char input[SIZE];
	char now_operation = OP_NULL;

	scanf("%s", input);
	for (int i = 0; i < SIZE; i++) {
		if (input[i] == '\0') {
			break;
		} else {
			switch (now_operation) {
				case OP_NULL:
					break;
				case OP_ADD:
					break;
				case OP_SUB:
					break;
				case OP_MUL:
					break;
				case OP_DIV:
					break;
				default:
					break;
			}
			printf("%c\n", input[i]);
		}
	}
}