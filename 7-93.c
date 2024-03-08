#include <stdio.h>
#include <math.h>

int getMaxN(int);

int main() {
	int N;
	int PowMap[11];

	if (scanf("%d", &N)) {
		// store the all number pow result
		PowMap[0] = (int) pow(0, N);
		PowMap[1] = (int) pow(1, N);
		PowMap[2] = (int) pow(2, N);
		PowMap[3] = (int) pow(3, N);
		PowMap[4] = (int) pow(4, N);
		PowMap[5] = (int) pow(5, N);
		PowMap[6] = (int) pow(6, N);
		PowMap[7] = (int) pow(7, N);
		PowMap[8] = (int) pow(8, N);
		PowMap[9] = (int) pow(9, N);

		// store the number each bit
		int number[7] = {0, 0, 0, 0, 0, 0, 0};
		number[7 - N] = 1;

		int start = (int) pow(10, N - 1);
		int count = getMaxN(N) - start;

		int real_number = start;
		for (int i = 0; i <= count; i++) {
			int sum = PowMap[number[0]] + PowMap[number[1]] +PowMap[number[2]] +PowMap[number[3]] +PowMap[number[4]] +PowMap[number[5]] +PowMap[number[6]];

			if (real_number == sum) {
				printf("%d\n", real_number);
			}
			real_number++;

			int number_pointer = 6;
			number[number_pointer]++;

			while (number[number_pointer] == 10) {
				number[number_pointer] = 0;
				number_pointer--;
				number[number_pointer]++;
			}
		}
		return 0;
	}
	return 1;
}

int getMaxN(int n) {
	int result = 0;
	while (n--) {
		result = result * 10 + 9;
	}
	return result;
}
