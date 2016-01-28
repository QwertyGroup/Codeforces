//CoodeForces Problem 53 C
//Ћ€гушонок

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int b = 0;
	int e = 0;
	for (int i = 1; i <= n; i++)

		if (i % 2 != 0)
		{
			cout << 1 + b << ' ';
			b = b + 1;
		}
		else
		{
			cout << n - e << ' ';
			e = e + 1;
		}

	//system("pause");
	return 0;
}