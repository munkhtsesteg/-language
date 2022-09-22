#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// gurvaljnii talbai
float talbai(float a, float b, float c);
struct Triangle
{
	float a, b, c;       // a,b,c ni gurvaljnii urt
};
int main()
{
	float p, s;
	puts("X gurvaljnii taluud:");
	struct Triangle X;
	scanf("%f %f %f", &X.a, &X.b, &X.c);
	puts("Y gurvaljnii taluud:");
	struct Triangle Y;
	scanf("%f %f %f", &Y.a, &Y.b, &Y.c);
	if(talbai(X.a, X.b, X.c) > talbai(Y.a, Y.b, Y.c))
		printf("X gurvaljin ilvv tom");
	else
		printf("Y gurvaljin ilvv tom");
	return 0;
}
float talbai(float a, float b, float c)
{
	float p, s;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s; 
}