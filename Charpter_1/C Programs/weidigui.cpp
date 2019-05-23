#include<iostream>
#include<cstdlib>

using namespace std;

int fact_iter(int i, int n)
{
	if(i-- == 1)
	{
		return n;
	}
	printf("fact_iter(%d, %d * %d = %d)\n", i, n, i, n * i);
	return fact_iter(i, n * i);
}

int fact(int i)
{
	return fact_iter(i, i);
}


int main(void)
{
	int i;
	cout << "fact(?):";
	cin >> i;
	cout << "fact(" << i << ") = " << fact(i) << endl;
	system("pause");
	return 0;
}