/*CodeForces problem 467 A
  ёра и заселение*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int p, q;
	int counter = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> p >> q;
		if (q - p >= 2) counter++;
	}
	cout << counter;
	//system("pause");
	return 0;
}