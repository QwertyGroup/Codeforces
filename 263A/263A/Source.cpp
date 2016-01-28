/*CodeForces problem 263 A
  Красивая матрица*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, j;
	bool flag = false;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			int temp;
			cin >> temp;
			if (temp == 1) { flag = true; break; }
		}
		if (flag) break;
	}
	i++;
	j++;
	cout << abs(3 - i) + abs(3 - j);
	//system("pause");
	return 0;
}