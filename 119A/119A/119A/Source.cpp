/*CodeForces problem 119 A
  Ёпическа€ игра*/

#include <iostream>

using namespace std;

int f(int a, int b);

int main()
{
	int a, b, n;
	cin >> a >> b >> n;
	
	while (true)
	{

	}

	return 0;
}

int f(int a, int b)
{
	while (a && b)
		if (a >= b)
			a %= b;
		else
			b %= a;
	return a | b;
}