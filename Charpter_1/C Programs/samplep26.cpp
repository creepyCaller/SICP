#include<iostream>
#include<cstdlib>

using namespace std;


int calcAmount(int *amount)
{
	return 50 * amount[0] + 25 * amount[1] + 10 * amount[2] + 5 * amount[3] + amount[4];
}

void displayMethod(int *amount, int methods)
{
	cout << methods << ": " << amount[0] * 50 << " + " << amount[1] * 25 << " + " << amount[2] * 10 << " + " << amount[3] * 5 << " + " << amount[4] << " = " << calcAmount(amount) << endl;
	return;
}

int main(void)
{
	int methods = 0;
	int NUM = 0;
	int amount[5] = {0}; // 50, 25, 10, 5, 1
	cout << "input NUM :";
	cin >> NUM;
	for(int j = 0; j <= 100; ++j) //50
	{
		amount[0] = j;
		for(int j1 = 0; j1 <= 100; ++j1) //25
		{
			amount[1] = j1;
			for(int j2 = 0; j2 <= 100; ++j2) //10
			{
				amount[2] = j2;
				for(int j3 = 0; j3 <= 100; ++j3) //5
				{
					amount[3] = j3;
					for(int j4 = 0; j4 <= 100; ++j4) //1
					{
						amount[4] = j4;
						if(calcAmount(amount) == NUM)
						{
							++methods;
							displayMethod(amount, methods);
						}
						amount[4] = 0;
					}
					amount[3] = 0;
				}
				amount[2] = 0;
			}
			amount[1] = 0;
		}
		amount[0] = 0;
	}
	cout << methods << "methods" << endl;
	system("pause");
	return 0;
}