/*CodeForces problem 451 A
  Игра с палочками*/

#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int nm = n*m;
	int counter = 0;
	while (nm > 0)
	{
		nm -= n + m - 1;
		n--;
		m--;
		counter++;
	}
	if (counter % 2 == 0) cout << "Malvika";
	else cout << "Akshat";
	//system("pause");
	return 0;
}