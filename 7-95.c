#include <stdio.h>

int main() {
	int start, end;
	int start_hour, start_minute, end_hour, end_minute;
	int hour, minute;
	if (scanf("%d %d", &start, &end)) {
		start_hour = start / 100;
		start_minute = start % 100;
		end_hour = end / 100;
		end_minute = end % 100;

		if (start_minute > end_minute) {
			end_hour -= 1;
			end_minute += 60;
			minute = end_minute - start_minute;
		} else {
			minute = end_minute - start_minute;
		}

		hour = end_hour - start_hour;

		printf("%02d:%02d", hour, minute);
		return 0;
	}
	return 1;
}