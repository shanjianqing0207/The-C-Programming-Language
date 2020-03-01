#include <stdio.h>
int main()
{
	int fahr;
	
	printf("逆序华氏温度转换摄氏温度表\n");
	
	for (fahr = 300; fahr >= 0; fahr -= 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr+32.0));
}

