#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Rational{
	int d, n; // d/n engiin butarhai
};
typedef struct Rational Rational;
Rational add(Rational a, Rational b);
Rational sub(Rational a, Rational b);
Rational mult(Rational a, Rational b);
Rational divi(Rational a, Rational b);
Rational simplify(Rational a);
int hbeh(int a, int b);
void print(Rational a);

int main()
{
	Rational a, b,c;
	scanf("%d %d", &a.d, &a.n);
	a = (simplify(a));
	print(a);
	scanf("%d %d", &b.d, &b.n);
	
	c=add(a, b);
	printf("niilber: %d/%d\n", c.d, c.n);
	c=sub(a, b);
	printf("yalgavar: %d/%d\n", c.d, c.n);
	c=divi(a,b);
	printf("huvaah: %d/%d\n", c.d, c.n);
	c=mult(a,b);
	printf("urjih: %d/%d\n", c.d, c.n);
	
}

Rational simplify(Rational a)
{
	int i, hieh;
	for(i = 1; i <= a.d && i <= a.n; i++){
		if(a.d % i == 0 && a.n % i == 0)
			hieh = i;
	}
	a.d = a.d / hieh;
	a.n = a.n / hieh;
	return a;
}

int hbeh(int a, int b)
{
	int i, min;
	for(i = a, min = i;; i++)
		if(i % a == 0 && i % b == 0)
			return i;
}

Rational add(Rational a, Rational b)
{
	int k, s;
	k = hbeh(a.n, b.n);
	s = (k / a.n)*a.d + (k / b.n)*b.d;
	Rational sum;
	sum.d = s;
	sum.n = k;
	return sum;
}

Rational sub(Rational a, Rational b)
{
	int k, s;
	k = hbeh(a.n, b.n);
	s = (k / a.n)*a.d - (k / b.n)*b.d;
	Rational substract;
	substract.d = s;
	substract.n = k;
	return substract;
}
Rational mult(Rational a, Rational b)
{
	int k, s;
	k = a.n*b.n;
	s = a.d*b.d;
	Rational multi;
	multi.d = s;
	multi.n = k;
	return multi;
}
Rational divi(Rational a, Rational b)
{
	int k, s;
	k = a.n*b.d;
	s = a.d*b.n;
	Rational divi;
	divi.d = s;
	divi.n = k;
	return divi;
}


void print(Rational a)
{
	printf("huraagdsan butarhai: %d/%d\n", a.d, a.n);
}
