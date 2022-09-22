#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Triangle{
	int a, b, c;
};

double find_area( struct Triangle g)
{
	int p, s;
	p = g.a + g.b + g.c;
	s = sqrt(p * (p - g.a) * (p - g.b) * (p - g.c));
	return s;
}

int main()
{
	struct Triangle x, y;
	puts("X gurvaljnii taluud:");
	scanf("%d %d %d", &x.a, &x.b, &x.c);
	puts("Y gurvaljnii taluud:");
	scanf("%d %d %d", &y.a, &y.b, &y.c);
	if(find_area(x) > find_area(y))
		printf("X gurvaljin tom");
	else
		printf("Y gurvaljin tom");
	return 0;
}
