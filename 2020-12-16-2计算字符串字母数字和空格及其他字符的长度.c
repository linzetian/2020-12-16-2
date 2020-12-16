//计算字符串字母数字和空格及其他字符的长度
#include<stdio.h>
#include<string.h>
#define SIZE 80
int main()
{
	int alber=0, voi=0, digit=0, other=0;
	printf("Enter the a string:");
	char ch[SIZE];
	int i = 0;
	gets(ch);
	for (i = 0; i < 80; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			alber++;
		else if (ch[i] >= 'A' && ch[i] <= 'Z')
			alber++;
		else if (ch[i] >= '0' && ch[i] <= '9')
			digit++;
		else if (ch[i] == ' ')
			voi++;
		else
			other++;
	}
	printf("the alber=%d\nthe digit=%d\nthe voi=%d\nthe other=%d\n",alber,digit,voi,other);
	return 0;
}