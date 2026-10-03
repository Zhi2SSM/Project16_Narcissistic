#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
	int N;
	int n = 1;
	scanf("%d", &N);
	int start = (int)pow(10, N - 1);
	int end = (int)pow(10, N) - 1;
	int i = start;
	while (i <= end)
	{

		int t = i;
		int sum = 0;
		int n = 0;
		do
		{
			int d = t % 10;
			t /= 10;
			sum += (int)pow(d,N);
			n++;
		} while (n<N);
		if (sum == i) {
			printf("%d\n", i);
		}
			i++;
	}
	return 0;
}