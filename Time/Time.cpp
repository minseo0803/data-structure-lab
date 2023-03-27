#include <cstdio>
#include <cstdlib>
#include <ctime>

int sum_of_N(int n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + 1;
	}
	return sum;
}

int sum_of_N2(int n)
{
	return (n * (n + 1)) / 2;
}

int main()
{
	clock_t start, finish;
	double duration;

	start = clock();
	int sum = sum_of_N(100000000);

	finish = clock()
}