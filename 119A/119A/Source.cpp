/*CodeForces problem 119 A
  Ёпическа€ игра*/

#include <iostream>

using namespace std;

int f(int a, int b);

int main()
{
	int a, b, n;
	cin >> a >> b >> n;
	
	bool turn = true; //true - semen; false - antisemen

	while (true)
	{
		if (turn)
		{
			n -= f(a, n);
			if (n < 0) { cout << "1"; exit(0); } //Anti Semen win
		}
		else
		{
			n -= f(b, n);
			if (n < 0) { cout << "0"; exit(0); } //Semen win
		}
		turn = !turn;
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