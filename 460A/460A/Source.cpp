/*CodeForces problem 460 A
  Вася и носки*/

#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int day = 0;
	while (n != 0)
	{
		day++;
		n--;
		if (day % m == 0) n++;
	}
	cout << day;
	//system("pause");
	return 0;
}