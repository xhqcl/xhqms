#include<stdio.h>

float t(float a, int x, char c)
{
	switch (c)
	{
	case '+':return a + x;
	case '-':return a - x;
	case '*':return a * x;
	case '/':return (float)a / x;
	}
}

int main()
{
	int x, i;

	float sum;

	char p;

	char a[13];

	printf("输入表达式：\n");

	scanf_s("%s", a);

	sum = a[0] - '0';

	for (i = 1; a[i] != '\0'; i++)
	{
		if (a[i] < '0' || a[i]>'9')
		{
			p = a[i];
			continue;
		}
		else
		{
			x = a[i] - '0';
			sum = t(sum, x, p);
		}

	}
	printf("%.f\n", sum);
	return 0;
}
