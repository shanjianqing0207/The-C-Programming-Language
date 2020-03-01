#include <stdio.h>
int main()
{
	double fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;
	
	printf("华氏温度与摄氏温度转换表（浮点数版本)\n");
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}
}

