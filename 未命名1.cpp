#include <stdio.h>
void max(int i, int j)
{
if (i > j)
	printf("%d\n", i);
else
	printf("%d\n", j);
}
int main(void)
{
	int a, b, c, d, e, f;
	a = 1, b = 4, c = 9, d = -3, e = 2, f = -4;
	max(a, b);
	max(c, d);
	max(e, f);
}

