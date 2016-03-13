/*Codeforces problem 492A
  Ваня и кубики*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int i = 0;

	while (true)
	{
		i++;
		sum += i*(i + 1) / 2;
		if (sum == n) break;
		if (sum >= n) { i--; break; }
	} 

	cout << i;
	//system("pause");
	return 0;
}