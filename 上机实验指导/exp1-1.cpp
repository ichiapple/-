#include<stdio.h>
#include<time.h>
#include<math.h>

long add1(long n)
{
	long i, sum = 0;
	for (i = 1; i <= n; i++)
		sum += i;
	return sum;
}

void AddTime1(long n)
{
	clock_t t;
	long sum;
	t = clock();
	sum = add1(n);
	t = clock() - t;
	printf("方法1：\n");
	printf("  结果：1~%d之和：%1d\n", n, sum);
	printf("  用时：%1f秒\n", ((float)t) / CLOCKS_PER_SEC);
}

long add2(long n)
{
	return n * (n + 1) / 2;
}

void AddTime2(long n)
{
	clock_t t;
	long sum;
	t = clock();
	sum = add2(n);
	t = clock() - t;
	printf("方法2：\n");
	printf("  结果：1~%d之和：%1d\n", n, sum);
	printf("  用时：%1f秒\n", ((float)t) / CLOCKS_PER_SEC);
}

int main()
{
	int n;
	printf("n(大于1000000)：");
	scanf_s("%d", &n);
	if (n < 1000000)return 0;
	AddTime1(n);
	AddTime2(n);
	return 1;
}