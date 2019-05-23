#include<iostream>
#include<cstdlib>

using namespace std;

int first_denomination(int kinds_of_coins)
{
	if(kinds_of_coins == 1)
	{
		return 1;
	}
	else if(kinds_of_coins == 2)
	{
		return 5;
	}
	else if(kinds_of_coins == 3)
	{
		return 10;
	}
	else if(kinds_of_coins == 4)
	{
		return 25;
	}
	else if(kinds_of_coins == 5)
	{
		return 50;
	}
	return 0;
}

int cc(int amount, int kinds_of_coins)
{
	if(amount == 0)
	{
		return 1;
	}
	else if (amount < 0 || kinds_of_coins == 0)
	{
		return 0;
	}
	else
	{
		return cc(amount, kinds_of_coins - 1) + cc(amount - first_denomination(kinds_of_coins), kinds_of_coins);
	}
}

int count_change(int amount)
{
	return cc(amount, 5);
}

int main(void)
{
	cout << count_change(100) << endl;
	system("pause");
	return 0;
}