/*Codeforces problem 492A
  Ваня и кубики*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int cur = 1;
	int counter = 1;
	int inc = 2;
	while (cur < n)
	{
		cur += inc;
		inc += cur;
		counter++;
	}

	cout << counter;
	system("pause");
	return 0;
}