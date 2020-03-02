#include <stdio.h>
main()
{
	int c, n1, n2, n3;

	n1 = 0;
	n2 = 0;
	n3 = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n')
			++n1;
		if (c == '\t')
			++n2;
		if (c == ' ')
			++n3;
	}
	printf("空格%d个，制表符%d个，换行符%d个\n", n3, n2, n1);
}


	

