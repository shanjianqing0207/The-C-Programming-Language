#include <stdio.h>
#define NONBLANK 'a'

/* replace string of blanks with a single blank */

main()
{
	int c, lastc;
	lastc = NONBLANK;	//初始化

	while ((c = getchar()) != EOF) {
		if (c != ' ')	//若字符不是空格，则直接输出
			putchar(c);
		if (c == ' ')	//若是空格，则进行判断
			if (lastc != ' ')	//若lastc不是空格，输出此空格
				putchar(c);	//若lastc是空格，则什么都不输出
		lastc = c;	//把当前存在c里的字符赋给lastc，进入下一个循环
	}
}

