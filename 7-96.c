#include <stdio.h>
#include <math.h>

int main() {
	double money, year, rate, interest;
	scanf("%lf %lf %lf", &money, &year, &rate);
	interest = (money) * pow(1 + rate, year) - money;
	printf("interest = %.2f", interest);
	return 0;
}