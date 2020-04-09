#include<stdio.h>
#include<math.h>
double log_2(double n)
{
	return log10(n) / log10(2);
}
long exponent(int n)
{
	long s = 1;
	for (int i = 1; i <= n; i++)
		s *= 2;
	return s;
}
long factorial(int n)
{
	long s = 1;
	for (int i = 1; i <= n; i++)
		s *= i;
	return s;
}
void fun(int n)
{
	printf("log2(n) sqrt(n)  n      nlog2(n)    n^2       n^3    2^n                 n!\n");
	printf("====================================================================================\n");
	for (int i = 1; i <= n; i++)
	{
		printf("%5.2f\t", log_2(double(i)));
		printf("%5.2f\t", sqrt(i));
		printf("%2d\t", i);
		printf("%7.2f\t", i * log_2(double(i)));
		printf("%5d\t", i * i);
		printf("%7d\t", i * i * i);
		printf("%8d\t", exponent(i));
		printf("%10d\n", factorial(i));
	}
}
int main()
{
	int n = 10;
	fun(n);
	return 1;
}