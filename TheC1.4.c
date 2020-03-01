#include <stdio.h>
int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("摄氏温度与华氏温度转换表\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius / (5.0/9.0) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}
