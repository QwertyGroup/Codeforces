/*CodeForces problem 379 A
  Новогодние свечки*/

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int time = 0;
	int ost = 0;
	while (a != 0)
	{
		if (a % b != 0) ost += a % b;
		time += a;
		a /= b;
		if (ost >= b)
		{
			a += ost / b;
			ost %= b;
		}
	}
	cout << time;
	//system("pause");
	return 0;
}