#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include<stdio.h>
int my_pow(int base, int exp)
{
	int result = 1;
	for (int i = 0;i < exp;i++) {
		result *= base;
	}
	return result;
}

int main(void)
{
	int N = 0;
	scanf("%d", &N);
	clock_t start = clock();
	int num = 0;
	int j = 0;
	int sum = 0;
int i = 0;
int begin = my_pow(10, N - 1);
int end = my_pow(10, N) - 1;
for(num=begin;num<=end;num++)
{  
	sum = 0;
	i = num;
	for (j=0;j<N;j++) 
	{
		int d = i % 10;
		i /= 10;
		sum +=my_pow(d, N);
		
		}
	if (sum == num)
	{
			printf("%d\n", num);
	}

}
	clock_t ed = clock();
	printf("Time taken: %f seconds\n", ((double)(ed - start)) / CLOCKS_PER_SEC);
	return 0;
}